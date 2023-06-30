import os
import openpyxl
from openpyxl.styles import Font, Alignment


root_dir = '../ObfuscationDatabase'

# Load the Excel spreadsheet
workbook = openpyxl.load_workbook('ObfuscationCategorization.xlsx')








for root,dirs, files in sorted(os.walk(root_dir)):
    #print(root)
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
                current_worksheet['C'+str(int(temp_string[0])+1)].value = file_contents
                current_worksheet['A'+str(int(temp_string[0])+1)].alignment = current_worksheet['A'+str(int(temp_string[0])+1)].alignment.copy(wrapText=True,horizontal='left', vertical='top')
                current_worksheet['C'+str(int(temp_string[0])+1)].alignment = current_worksheet['C'+str(int(temp_string[0])+1)].alignment.copy(wrapText=True,horizontal='left', vertical='top')
    
    elif(root.split('\\')[-1][0] == 'O') :
        folder_name = root.split('\\')[-1]
        print("Folder: ",folder_name)
        if folder_name not in workbook.sheetnames:
            current_worksheet = workbook.create_sheet(title = folder_name)
        else:
            current_worksheet = workbook[folder_name]

        for file in files:
            
            file_extension = os.path.splitext(file)[1]
            if file_extension != ('.cpp'):
                continue
          
                
            
            with open(root+ '\\'+file, 'r', encoding='utf-8') as temp_file:
                file_contents = temp_file.read()
                
                base_code_name = file.split('.')[0].split('_')[-1]
                print(base_code_name)
                current_worksheet['A'+str(int(base_code_name[1:])+1)].value = base_code_name
                current_worksheet['C'+str(int(base_code_name[1:])+1)].value = file_contents
                current_worksheet['A'+str(int(base_code_name[1:])+1)].alignment = current_worksheet['A'+str(int(base_code_name[1:])+1)].alignment.copy(wrapText=True,horizontal='left', vertical='top')
                current_worksheet['C'+str(int(base_code_name[1:])+1)].alignment = current_worksheet['C'+str(int(base_code_name[1:])+1)].alignment.copy(wrapText=True,horizontal='left', vertical='top')

                # add obfuscation to base code sheet
                if base_code_name not in workbook.sheetnames:
                    current_worksheet = workbook.create_sheet(title = base_code_name)
                else:
                    current_worksheet = workbook[base_code_name]

                #NOTE: random stuff is added, some Obfuscation labels are the base code number equivalent
                    current_worksheet['A'+str(int(folder_name[1:])+1)].value = folder_name
                    current_worksheet['C'+str(int(folder_name[1:])+1)].value = file_contents
                    current_worksheet['A'+str(int(folder_name[1:])+1)].alignment = current_worksheet['A'+str(int(folder_name[1:])+1)].alignment.copy(wrapText=True,horizontal='left', vertical='top')
                    current_worksheet['C'+str(int(folder_name[1:])+1)].alignment = current_worksheet['C'+str(int(folder_name[1:])+1)].alignment.copy(wrapText=True,horizontal='left', vertical='top')

                


# Save the changes
workbook.save('ObfuscationCategorization.xlsx')

