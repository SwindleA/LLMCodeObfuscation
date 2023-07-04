import os
import openai
from key import OPENAI_API_KEY

openai.api_key = OPENAI_API_KEY

def askQuestion(question):
    
    response = openai.Completion.create(
        model="text-davinci-003",
        prompt=question,
        temperature=0.7,
        max_tokens=150,
        top_p=1.0,
        frequency_penalty=0.0,
        presence_penalty=0.0
        )
    
    
    return response