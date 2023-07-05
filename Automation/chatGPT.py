import os
import openai
from key import OPENAI_API_KEY
import time

openai.api_key = OPENAI_API_KEY

def askQuestion(question):
    
    while True:

        try:

            response = openai.ChatCompletion.create(
                model="gpt-3.5-turbo",
                messages=[{"role": "user", "content" : question}],
                temperature=0.7,
                max_tokens=2048,
                top_p=1.0,
                frequency_penalty=0.0,
                presence_penalty=0.0
                )
            break
        except openai.error.ServiceUnavailableError as e:
            print("API error:", e)
            print("Retrying in 10 seconds...")
            time.sleep(10)
    
    
    return response['choices'][0]['message']['content']