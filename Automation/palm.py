import pprint
import google.generativeai as palm
from key import PALM_API_KEY

palm.configure(api_key=PALM_API_KEY)
model = 'models/chat-bison-001'

def askQuestion(question):

    response = palm.chat(
        
        model= model,
        prompt=question,
        temperature=0.7,
        top_p = 1.0
        # The maximum length of the response
        #max_output_tokens=2048,
    )

    return response.messages[1]["content"]

