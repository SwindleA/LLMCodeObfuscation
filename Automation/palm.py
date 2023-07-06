import pprint
import google.generativeai as palm
from key import PALM_API_KEY

palm.configure(api_key=PALM_API_KEY)
model = 'models/text-bison-001'

def askQuestion(question):

    response = palm.generate_text(
        model=model,
        prompt=question,
        temperature=0.7,
        # The maximum length of the response
        max_output_tokens=2048,
    )

    return response.result