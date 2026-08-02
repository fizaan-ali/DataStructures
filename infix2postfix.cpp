#include<iostream>
#include<stack>

using namespace std;

int prec(char op){
    if(op == '^')
        return 3;
    else if(op == '*' || op == '/' || op == '%')
        return 2;
    else if(op == '+' || op == '-')
        return 1;
    else 
        return  -1;
}

bool isRightAssociative(char op){
    return op == '^';
}

string infix2postfix(string infix){
    stack<char> st;
    string result = "";
    for(char c: infix){
        if(isalnum(c)){
            result += c;
        }
        else if(c == '('){
            st.push(c);
        }
        else if(c == ')'){
            while(!st.empty() && st.top()!='('){
                result += st.top();
                st.pop();
            }
            st.pop();
        }
        else{
            while(!st.empty() && prec(st.top()) >= prec(c) && st.top()!= '(' && !isRightAssociative(c)){
                result += st.top();
                st.pop();
            }
            st.push(c);
        }
    }
    while(!st.empty()){
        result += st.top();
        st.pop();
    }
    return result;
}

int main() {

    cout << infix2postfix("a+(b*c)-d");

    return 0;
}
