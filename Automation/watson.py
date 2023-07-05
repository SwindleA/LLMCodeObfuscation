import requests
import json

def send_question(question):
    url = "<Watson Discovery API URL>/v1/direct_answer"
    api_key = "<Your API Key>"
    
    headers = {
        "Content-Type": "application/json",
        "Authorization": "Bearer " + api_key
    }
    
    payload = {
        "query": question
    }
    
    response = requests.post(url, headers=headers, data=json.dumps(payload))
    
    if response.status_code == 200:
        answer = response.json().get("answer", "")
        return answer
    else:
        return None

# Example usage
question = "What is the capital of France?"
answer = send_question(question)
print(answer)
