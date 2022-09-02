class Solution:
    def decodeMessage(self, key: str, message: str) -> str:
        final = ''
        alphabets='abcdefghijklmnopqrstuvwxyz'
        final_key=''
        for i in key:
            if i != ' ' and i not in final_key:
                final_key+=i
                
        for i in message:
            if i == ' ':
                final+=' '
            else:
                final=final+alphabets[final_key.index(i)]
        return final 
