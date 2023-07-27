# ObfuscastionDatabase

This project contains base code, obfuscated code, and automation scripts used to test Language Models ability to interpret obfuscated code. This was created for the project outline in the paper `Language Models and Obfuscated Code` located in the `Academic_Work` directory. The paper will help clarify what most of this does becaus this README is pretty rough. 

# What this can do

 * Store the base code in a formatted manner in a spreadsheet
 * Organize the obfuscated code by base code and obfuscation in spreadsheets. 
 * Take the obfuscated code and/or the base code and asked a question to a LM API using a template.

# Setting up the Excel workbook

1. Create the workbook that your results will be stored in.

2. Run the `codeLoader.py` script from the main directory using the command `python Automation/codeLoader.py`. 
    * Make sure to set the `root_dir_workbook` variable to where your workbook is stored. 
    * Set the `current_workbook` variable to the name of the workbook that you created in step one. 
    * The load base code section of the code is commented out by defualt.

Now you should have a workbook that has two sets of sheets. Ones that are named `B1`, `B2`,.... and sheets that are named `O1`, `O2`,.... Each sheets should have a header line and the obfuscated code. The sheets named `B#` should contain all the obfuscations for that given base code. The sheets named `O#` should contain all the obfuscations of that type. 

# Setting up to ask questions

There are already 3 default question templates in the `Automation/Question_Templates` folder. Questions 1 and 2 will insert the base code and obfuscated code before and after the `AND` in the file. Question 3 uses just the obfuscation. To add a new question, create the file in the question template folder and create a copy of the `questionLoader_Q1.py` file and edit it to follow the question format of the new question. The only major changes to the file that are need are: properly inserting the code into the new question when the question string is created and the columns in the excel that the information is inserted to. The `question_number` variable should be changed to the new question number. `question_column` dictates where the question is inserted in the spreadsheet. `answer_column` dictates where the response is put. The `codeLoader.py` file will also need to be edited to get the correctness rating dropdowns for the new question. The `Template` spreadsheet will also need to be edited to add the headers for the new question.

The three language model APIs that are already setup are OpenAI's ChatGPT 3.5, AI21 Studio's Jurassic-2, and Google PaLM. The files containing the API calls are in the `Automation` directory. To add another language model, simply create a file containing a method named `askQuestion` that takes the question as a string. 

A file name `Automation/key.py` will need to be created to hold you api keys. 

# Getting Results
Once the `codeLoader.py` script has been ran. Choose a question to run from the files named `questionLoader_Q#.py`.

1. Edit the variables
    * Change the `root_dir_workbook` to the same directory used in `codeLoader.py`
    * Change the `current_workbook` variable to the workbook previously created.
    * Change `LM` to the name of the LM you want to use.
        * If you added a new LM, make sure to import the file.
2. Make sure the Excel workbook is closed. 
3. Run the code from the `Automation` directory using the command `python questionLoader_Q1.py`
    * NOTE: ChatGPT may take upwards of 3 hours to run all the questions. There is a 20 second built in delay for ChatGPT questions because the free api has a 3 questions per minute limit. If you have a paid API with not limit then  you can remove the delay located on lines 129-132. 
    * Jurassic and PaLM take about 1.5 hours. 
    * NOTE: PaLM will return a lot of `NONE` responses to questions. It is an error with the API and our questions that has not been looked into. 

# Miscellaneous

The folder `Compiled_Code` and the files `C_codeLoader.py` and `C_questionLoader_Q#.py` are for future directions in this research. The `Compiled_Code` folder contains the assembly version of all the obfuscated code, created using https://godbolt.org/. The `C_` files are altered versions of the regular scripts created to work with the compiled code. NOTE: If you were to run questions with the compiled code, the token size is too big in many cases because of the length of the assembly code. 

There are probably other random files, but most files should be functional. 

# System Requirements

This was only tested on Windows 10 on one computer. If it works on my computer, I am sure it will work on yours. The only extra software needed is Excel. 
* The library `openpyxl` is used in this project for formatting the data in the Excel spreadsheets. The library should be available through pip. 


# Authors
* Adrian Swindle
    * Authored the automation scripts, API calls, etc...
    * Contact: aswindle724@gmail.com
* Derrick McNealy
    * Wrote half the obfuscations and base code. 