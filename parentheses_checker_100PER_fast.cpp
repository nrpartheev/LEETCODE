bool isValid(string s) {
    stack<char> par;
    for(char i:s){
        if (i == '(' || i == '{' || i == '['){
            par.push(i);
        }
        else if( i == ')'){
            if(par.empty()){
                return 0;
            }
            char temp = par.top();
            if (temp != '('){
                return 0;
            }
            else {
                par.pop();
            }
        }
        else if(i == ']'){
            if(par.empty()){
                return 0;
            }
            char temp = par.top();
            if (temp != '['){
                return 0;
            }
            else{
                par.pop();
            }
        }
        else if(i == '}'){
            if(par.empty()){
                return 0;
            }
            char temp = par.top();
            if (temp != '{'){
                return 0;
            }
            else{
                par.pop();
            }
        }
    }
    if(par.empty()){
        return 1;
    }
    else{
        return 0;
    }     
 }
