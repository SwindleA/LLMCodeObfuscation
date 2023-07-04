#Loads the Base Code and the Obfuscated code into the appropriate sheets
import os
import openpyxl
from openpyxl.styles import Font, Alignment
import string
from openpyxl.styles import PatternFill
from openpyxl.styles import Font
from openpyxl.formatting.rule import Rule
from openpyxl.formula import Tokenizer
from openpyxl.worksheet.datavalidation import DataValidation


# def initialFormattingO(current_worksheet_o):

#     alphabet = string.ascii_uppercase

#     fill = PatternFill(fill_type='solid', fgColor='C9DAF8')
#     font = Font(size=15, bold=True)

#     for letter in alphabet:
#         current_worksheet_o[letter+'1'].value = '=[ObfuscationCategorization.xlsx]Template!'+letter+'22'
#         current_worksheet_o[letter+'1'].fill = fill
#         current_worksheet_o[letter+'1'].font = font

#     # Define the list of values and their formatting options
#     values = ['High Correct', 'Medium Correct', 'Low Correct','High Maybe', 'Medium Maybe','Low Maybe','Low Incorrect','Medium Incorrect', 'High Incorrect','N/A']
#     formats = [PatternFill(fgColor='1dad00'), PatternFill(fgColor='2bff00'), PatternFill(fgColor='98fa84'), PatternFill(fgColor='fa7a02'), PatternFill(fgColor='f78b25'), PatternFill(fgColor='ff9b3d'), PatternFill(fgColor='ff6970'), PatternFill(fgColor='fc323d'), PatternFill(fgColor='db000b'),  PatternFill(fgColor='9ca3ad')]

#     # Create a Tokenizer to convert the list of values into a formula
    
#     list_formula = Tokenizer(values)

#     # Create a Rule object with the List rule and formatting options
#     rule = Rule(type='expression', dxfId=0, priority=1)
#     rule.formula = [f'{list_formula}']
#     rule.stopIfTrue = True  # Stop applying further rules if this rule is true

#     # Apply the rule to a range of cells
#     range_to_format = 'I2:I56'
#     current_worksheet_o.conditional_formatting.add(range_to_format, rule)

    

#     data_validation = DataValidation(type="list", formula1=f'"{",".join(values)}"')


#     for value, format in zip(values, formats):
#         #current_worksheet_o.conditional_formatting.add(f'{range_to_format}="{value}"', Rule(type="expression", dxfId=0, formula=[f'{list_formula}="{value}"'], stopIfTrue=True))
#         for row in current_worksheet_o.iter_rows(min_row=2, max_row=56, min_col=9, max_col=9):
#             for cell in row:
                
#                 cell.fill = format
#                 data_validation.add(cell)
    
    
#     current_worksheet_o.freeze_panes = 'A2'





root_dir_workbook = 'C:\\Users\\aswin\\OneDrive - Saint Louis University\\Documents\\REU-2023\\REU-Project\\ObfuscationDatabase'
root_dir = '../ObfuscationDatabase'

# Load the Excel spreadsheet
current_workbook = '\\LM2.xlsx'#'\\ObfuscationCategorization.xlsx'
workbook = openpyxl.load_workbook(root_dir_workbook+ current_workbook)








for root,dirs, files in sorted(os.walk(root_dir)):
    
#Load Base Code
    # if(root == '../ObfuscationDatabase\Base_Code'):
    #     if 'List_Of_Base_Programs' not in workbook.sheetnames:
    #         current_worksheet = workbook.create_sheet(title = 'List_Of_Base_Programs')
    #     else:
    #         current_worksheet = workbook['List_Of_Base_Programs']
       
    #     for file in files:
            
    #         with open(root+ '\\'+file, 'r') as temp_file:
    #             file_contents = temp_file.read()
                
    #             temp_string = file[1:].split('.')
                
    #             current_worksheet['A'+str(int(temp_string[0])+1)].value = file.split('.')[0]
    #             current_worksheet['E'+str(int(temp_string[0])+1)].value = file_contents
    #             current_worksheet['A'+str(int(temp_string[0])+1)].alignment = current_worksheet['A'+str(int(temp_string[0])+1)].alignment.copy(wrapText=True,horizontal='left', vertical='top')
    #             current_worksheet['E'+str(int(temp_string[0])+1)].alignment = current_worksheet['E'+str(int(temp_string[0])+1)].alignment.copy(wrapText=True,horizontal='left', vertical='top')

#Load Obfuscations
    if(root.split('\\')[-1][0] == 'O') :
        folder_name = root.split('\\')[-1]
        
        #If obfuscation sheet has not been created yet
        if folder_name not in workbook.sheetnames:
            current_worksheet_o = workbook.create_sheet(title = folder_name)
            
            #initialFormattingO(current_worksheet_o)



        else:
            current_worksheet_o = workbook[folder_name]

        #for each file in the folder
        for file in files:
            
            file_extension = os.path.splitext(file)[1]
            if file_extension != ('.cpp'):
                continue
          
            with open(root+ '\\'+file, 'r', encoding='utf-8') as temp_file:
                file_contents = temp_file.read()
                
                # Loading into O sheet
                base_code_name = file.split('.')[0].split('_')[-1]
                
                row_number = str(int(base_code_name[1:])+1)
                
                current_worksheet_o['A'+row_number].value = base_code_name
                current_worksheet_o['C'+row_number].value = file_contents
                current_worksheet_o['A'+row_number].alignment = current_worksheet_o['A'+row_number].alignment.copy(wrapText=True,horizontal='left', vertical='top')
                current_worksheet_o['C'+row_number].alignment = current_worksheet_o['C'+row_number].alignment.copy(wrapText=True,horizontal='left', vertical='top')
                
                
    # Add obfuscation to base code sheet

                #If the base code sheet has not been created yet
                if base_code_name not in workbook.sheetnames:
                    current_worksheet_b = workbook.create_sheet(title = base_code_name)

                    alphabet = string.ascii_uppercase

                    fill = PatternFill(fill_type='solid', fgColor='C9DAF8')
                    font = Font(size=15, bold=True)

                    for letter in alphabet:
                        current_worksheet_b[letter+'1'].value = '=[ObfuscationCategorization.xlsx]Template!'+letter+'1'
                        current_worksheet_b[letter+'1'].fill = fill
                        current_worksheet_b[letter+'1'].font = font


                    current_worksheet_b.freeze_panes = 'A2'

                else:
                    current_worksheet_b = workbook[base_code_name]
                
                
                #setting the row number to be 1 more than the obfuscation name
                row_number = str(int(folder_name[1:])+1)
                

                
                #Adding the Data to the cells
                current_worksheet_b['A'+row_number].value = folder_name
                current_worksheet_b['C'+row_number].value = file_contents

                #Formatting
                current_worksheet_b['A'+row_number].alignment = current_worksheet_b['A'+row_number].alignment.copy(wrapText=True,horizontal='left', vertical='top')
                current_worksheet_b['C'+row_number].alignment = current_worksheet_b['C'+row_number].alignment.copy(wrapText=True,horizontal='left', vertical='top')

# Save the changes
workbook.save(root_dir_workbook+current_workbook)

