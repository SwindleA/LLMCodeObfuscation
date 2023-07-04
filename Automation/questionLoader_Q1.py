#Loads the Base Code and the Obfuscated code into a question and puts the question into the spreadsheet
import os
import openpyxl
from openpyxl.styles import Font, Alignment
import execjs

from chatGPT import askQuestion

root_dir_workbook = 'C:\\Users\\aswin\\OneDrive - Saint Louis University\\Documents\\REU-2023\\REU-Project\\ObfuscationDatabase'
root_dir = '..'

# Load the Excel spreadsheet
current_workbook = '\\LM2.xlsx'#'\\ObfuscationCategorization.xlsx'
workbook = openpyxl.load_workbook(root_dir_workbook+ current_workbook)

question_number = 'Q1'
question_column = 'E'
answer_column = 'G'

code_one = 3
code_two = 8

with open('Question_Templates\\'+question_number+'.txt', 'r', encoding='utf-8') as question_template:
    question = question_template.readlines()
    print(question_template.read())





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



# Loading question and answer into O sheet
            
            #getting answer to question
            response = askQuestion(''.join(temp_question))
            answer = response['choices'][0]['text']

            

            o_row_number = str(int(base_code_name[1:])+1)
            o_question_cell = current_worksheet_o[question_column+o_row_number]
            o_answer_cell = current_worksheet_o[answer_column+o_row_number]

            #initial question and answer loading into o sheet
            o_question_cell.value = ''.join(temp_question)
            o_answer_cell.value = ''.join(answer)

            #formatting for o sheet
            o_question_cell.alignment = Alignment(wrapText=True,horizontal='left', vertical='top')
            o_answer_cell.alignment = Alignment(wrapText=True,horizontal='left', vertical='top')
            

            # Loading question and answer into B sheet
            current_worksheet_b = workbook[base_code_name]

            b_row_number = str(int(folder_name[1:])+1)
            b_question_cell = current_worksheet_b[question_column+b_row_number]
            b_answer_cell = current_worksheet_b[answer_column+b_row_number]

            #initial question
            b_question_cell.value = ''.join(temp_question)
            b_answer_cell.value = ''.join(answer)

           
            #formatting
            b_question_cell.alignment = Alignment(wrapText=True,horizontal='left', vertical='top')
            b_answer_cell.alignment = Alignment(wrapText=True,horizontal='left', vertical='top')
            
            

        break     
        


# Save the changes
workbook.save(root_dir_workbook+current_workbook)




