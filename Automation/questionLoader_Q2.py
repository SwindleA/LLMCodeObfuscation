#Loads the Base Code and the Obfuscated code into a question and puts the question into the spreadsheet
import os
import openpyxl
from openpyxl.styles import Font, Alignment


root_dir_workbook = 'C:\\Users\\aswin\\OneDrive - Saint Louis University\\Documents\\REU-2023\\REU-Project\\ObfuscationDatabase'
root_dir = '..'

# Load the Excel spreadsheet
workbook = openpyxl.load_workbook(root_dir_workbook+'\\ObfuscationCategorization.xlsx')

question_number = 'Q2'#input("Enter the question you would like to load: \n Q1 \n Q2 \n etc... \n")

with open('Question_Templates\\'+question_number+'.txt', 'r', encoding='utf-8') as question_template:
    question = question_template.readlines()
    print(question_template.read())

code_one = 3
code_two = 8



for root,dirs, files in sorted(os.walk(root_dir)):

    if(root.split('\\')[-1][0] == 'O') :
        folder_name = root.split('\\')[-1]
        print("Folder name: ",folder_name)
        current_worksheet_o = workbook[folder_name]

        #for each file in the folder
        for file in files:
            
            temp_question = list(question)
            
            file_extension = os.path.splitext(file)[1]
            if file_extension != ('.cpp'):
                continue

            with open(root+ '\\'+file, 'r', encoding='utf-8') as temp_file:
                obfuscated_code = temp_file.read()

                if '/** N/A **/' in obfuscated_code:
                    continue

            base_code_name = file.split('.')[0].split('_')[-1]
            row_number_int = int(base_code_name[1:])+1

            if(row_number_int%2 == 0):
                temp_question.insert(code_one,obfuscated_code)
            else:
                temp_question.insert(code_two,obfuscated_code)

            

            with open(root_dir+'\\Base_Code\\'+base_code_name+".cpp", 'r',encoding='utf-8') as temp_file_2:
                base_code = temp_file_2.read()

            if(row_number_int%2 == 0):
                temp_question.insert(code_two,base_code)
            else:
                temp_question.insert(code_one, base_code)
            
            #for testing
            # with open(root_dir+base_code_name+".txt", 'w',encoding='utf-8') as file:
            #     file.writelines(temp_question)

            # Loading question into O sheet
            
            
            row_number = str(int(base_code_name[1:])+1)
            
            #initial question
            current_worksheet_o['M'+row_number].value = ''.join(temp_question)

            #follow up question
            current_worksheet_o['Q'+row_number].value = 'explain'

            #formatting
            current_worksheet_o['M'+row_number].alignment = current_worksheet_o['M'+row_number].alignment.copy(wrapText=True,horizontal='left', vertical='top')
            current_worksheet_o['Q'+row_number].alignment = current_worksheet_o['Q'+row_number].alignment.copy(wrapText=True,horizontal='left', vertical='top')
            

            
                
        break


# Save the changes
workbook.save(root_dir_workbook+'\\ObfuscationCategorization.xlsx')




