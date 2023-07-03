#Loads the Base Code and the Obfuscated code into the appropriate sheets
import os
import openpyxl
from openpyxl.styles import Font, Alignment


root_dir_workbook = 'C:\\Users\\aswin\\OneDrive - Saint Louis University\\Documents\\REU-2023\\REU-Project\\ObfuscationDatabase'
root_dir = '../ObfuscationDatabase'

# Load the Excel spreadsheet
workbook = openpyxl.load_workbook(root_dir_workbook+'\\ObfuscationCategorization.xlsx')








for root,dirs, files in sorted(os.walk(root_dir)):
    
#Load Base Code
    if(root == '../ObfuscationDatabase\Base_Code'):
        if 'List_Of_Base_Programs' not in workbook.sheetnames:
            current_worksheet = workbook.create_sheet(title = 'List_Of_Base_Programs')
        else:
            current_worksheet = workbook['List_Of_Base_Programs']
       
        for file in files:
            
            with open(root+ '\\'+file, 'r') as temp_file:
                file_contents = temp_file.read()
                
                temp_string = file[1:].split('.')
                
                current_worksheet['A'+str(int(temp_string[0])+1)].value = file.split('.')[0]
                current_worksheet['E'+str(int(temp_string[0])+1)].value = file_contents
                current_worksheet['A'+str(int(temp_string[0])+1)].alignment = current_worksheet['A'+str(int(temp_string[0])+1)].alignment.copy(wrapText=True,horizontal='left', vertical='top')
                current_worksheet['E'+str(int(temp_string[0])+1)].alignment = current_worksheet['E'+str(int(temp_string[0])+1)].alignment.copy(wrapText=True,horizontal='left', vertical='top')

#Load Obfuscations
    elif(root.split('\\')[-1][0] == 'O') :
        folder_name = root.split('\\')[-1]
        
        #If obfuscation sheet has not been created yet
        if folder_name not in workbook.sheetnames:
            current_worksheet_o = workbook.create_sheet(title = folder_name)
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
workbook.save(root_dir_workbook+'\\ObfuscationCategorization.xlsx')

