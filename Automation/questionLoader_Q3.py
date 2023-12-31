#Loads the Base Code and the Obfuscated code into a question and puts the question into the spreadsheet
#This is for questions that only need the obfuscation
import os
import openpyxl
from openpyxl.styles import Font, Alignment
import time

import chatGPT
import jurassic_2
import palm

root_dir_workbook = 'C:\\Users\\aswin\\OneDrive - Saint Louis University\\Documents\\REU-2023\\REU-Project\\ObfuscationDatabase'
root_dir = '..'

# Load the Excel spreadsheet
current_workbook = #'\\ChatGPT.xlsx'#'\\Jurassic_2.xlsx'#'\\PaLM.xlsx'#

#Change this depending on the Language Model being used
LM = #chatGPT

workbook = openpyxl.load_workbook(root_dir_workbook+ current_workbook)

question_number = 'Q3'
question_column = 'U'
answer_column = 'W'

code_one = 3


with open('Question_Templates\\'+question_number+'.txt', 'r', encoding='utf-8') as question_template:
    question = question_template.readlines()
    print(question_template.read())





for root,dirs, files in sorted(os.walk(root_dir)):

    if(root.split('\\')[-1][0] == 'O') :
        folder_name = root.split('\\')[-1]
        print("Folder name: ",folder_name)
        
        #Use this if statement to skip obfuscatations already competed for this LM and question
        # if(folder_name != 'O18'): #or folder_name == 'O10' or folder_name == 'O11' or folder_name == 'O12'or folder_name == 'O13'or folder_name == 'O14'):
        #     print("skipped")
        #     continue

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

            
            temp_question.insert(code_one,obfuscated_code)

# Loading question and answer into O sheet
            
            #getting answer to question
            answer = LM.askQuestion(''.join(temp_question))
            

            if(LM == palm and answer == 'NONE'):
                print(folder_name + base_code_name)

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
            
            if(LM == chatGPT):
                start_time = time.perf_counter()
                while time.perf_counter() - start_time < 21:
                    pass

            # Save the changes
            workbook.save(root_dir_workbook+current_workbook)
        
        # Use this if statement to break the code when testing
        #     if(base_code_name == 'B2'):

        #         print("code contains break statement")
        #         break     
        # break


# Save the changes
workbook.save(root_dir_workbook+current_workbook)




