# #Loads the Base Code and the Obfuscated code into a question and puts the question into the spreadsheet
# #This is for a question and follow up question
# import os
# import openpyxl
# from openpyxl.styles import Font, Alignment
# import time

# import chatGPT
# import jurassic_2
# import palm

# root_dir_workbook = 'C:\\Users\\aswin\\OneDrive - Saint Louis University\\Documents\\REU-2023\\REU-Project\\ObfuscationDatabase'
# root_dir = '..'

# # Load the Excel spreadsheet
# current_workbook = '\\Q2Test.xlsx'#'\\PaLM_Q1.xlsx'#'\\ChatGPT_Q1.xlsx'##'\\ObfuscationCategorization.xlsx''\\LM2.xlsx'

# #Change this depending on the Language Model being used
# LM = chatGPT

# follow_up_question = 'explain'

# workbook = openpyxl.load_workbook(root_dir_workbook+ current_workbook)

# question_number = 'Q2'

# _1_question_column = 'M'
# _1_answer_column = 'O'

# _2_question_column = 'Q'
# _2_answer_column = 'S'

# code_one = 3
# code_two = 8

# with open('Question_Templates\\'+question_number+'.txt', 'r', encoding='utf-8') as question_template:
#     question = question_template.readlines()
#     print(question_template.read())





# for root,dirs, files in sorted(os.walk(root_dir)):

#     if(root.split('\\')[-1][0] == 'O') :
#         folder_name = root.split('\\')[-1]
#         print("Folder name: ",folder_name)
        
        

#         current_worksheet_o = workbook[folder_name]

#         #for each file in the folder
#         for file in files:
            
#             temp_question = list(question)
            
#             file_extension = os.path.splitext(file)[1]
#             if file_extension != ('.cpp'):
#                 continue

#             with open(root+ '\\'+file, 'r', encoding='utf-8') as temp_file:
#                 obfuscated_code = temp_file.read()

#                 if '/** N/A **/' in obfuscated_code:
#                     continue

#             base_code_name = file.split('.')[0].split('_')[-1]
            
#             row_number_int = int(base_code_name[1:])+1

#             if(row_number_int%2 == 0):
#                 temp_question.insert(code_one,obfuscated_code)
#             else:
#                 temp_question.insert(code_two,obfuscated_code)

            

#             with open(root_dir+'\\Base_Code\\'+base_code_name+".cpp", 'r',encoding='utf-8') as temp_file_2:
#                 base_code = temp_file_2.read()

#             if(row_number_int%2 == 0):
#                 temp_question.insert(code_two,base_code)
#             else:
#                 temp_question.insert(code_one, base_code)
            
#             #for testing
#             # with open(root_dir+base_code_name+".txt", 'w',encoding='utf-8') as file:
#             #     file.writelines(temp_question)



# # Loading question and answer into O sheet
            
#             #getting answer to question
#             answer = LM.yesnoQuestion(''.join(temp_question),follow_up_question)
            

#             if(LM == palm and answer == 'NONE'):
#                 print(folder_name + base_code_name)

#             o_row_number = str(int(base_code_name[1:])+1)
#             o_1_question_cell = current_worksheet_o[_1_question_column+o_row_number]
#             o_2_question_cell = current_worksheet_o[_2_question_column+o_row_number]
            
#             o_1_answer_cell = current_worksheet_o[_1_answer_column+o_row_number]
#             o_2_answer_cell = current_worksheet_o[_2_answer_column+o_row_number]

#             #initial question and answer loading into o sheet
#             o_1_question_cell.value = ''.join(temp_question)
#             o_1_answer_cell.value = ''.join(answer.split('\n')[0])

#             #follow up question
#             o_2_question_cell.value = follow_up_question
#             o_2_answer_cell.value = ''.join(answer.split('\n')[1:])

#             #formatting for o sheet
#             o_1_question_cell.alignment = Alignment(wrapText=True,horizontal='left', vertical='top')
#             o_1_answer_cell.alignment = Alignment(wrapText=True,horizontal='left', vertical='top')

#             o_2_question_cell.alignment = Alignment(wrapText=True,horizontal='left', vertical='top')
#             o_2_answer_cell.alignment = Alignment(wrapText=True,horizontal='left', vertical='top')
            

#             # Loading question and answer into B sheet
#             current_worksheet_b = workbook[base_code_name]

#             b_row_number = str(int(folder_name[1:])+1)
#             b_1_question_cell = current_worksheet_b[_1_question_column+b_row_number]
#             b_1_answer_cell = current_worksheet_b[_1_answer_column+b_row_number]

#             b_2_question_cell = current_worksheet_b[_2_question_column+b_row_number]
#             b_2_answer_cell = current_worksheet_b[_2_answer_column+b_row_number]

            
#             #initial question and answer loading into o sheet
#             b_1_question_cell.value = ''.join(temp_question)
#             b_1_answer_cell.value = ''.join(answer.split('\n')[0])

#             #follow up question
#             b_2_question_cell.value = follow_up_question
#             b_2_answer_cell.value = ''.join(answer.split('\n')[1:])

           
#             #formatting
#             b_1_question_cell.alignment = Alignment(wrapText=True,horizontal='left', vertical='top')
#             b_1_answer_cell.alignment = Alignment(wrapText=True,horizontal='left', vertical='top')

#             b_2_question_cell.alignment = Alignment(wrapText=True,horizontal='left', vertical='top')
#             b_2_answer_cell.alignment = Alignment(wrapText=True,horizontal='left', vertical='top')
            
#             if(LM == chatGPT):
#                 start_time = time.perf_counter()
#                 while time.perf_counter() - start_time < 21:
#                     pass

#             # Save the changes
#             workbook.save(root_dir_workbook+current_workbook)
            
#             if(base_code_name == "B4"):
#                 print("code contains break statement")
#                 break
#         break     
        


# # Save the changes
# workbook.save(root_dir_workbook+current_workbook)




