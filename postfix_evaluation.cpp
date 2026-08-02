#include<iostream>
#include<stack>

using namespace std;

int postfix_evaluation(string postfix){
    stack<int> st;
    for(char c : postfix){
        if(isdigit(c)){
            st.push(c - '0');
        }
        else{
            int op1 = st.top();
            st.pop();
            int op2 = st.top();
            st.pop();

            int result;

            switch(c){
                case '+':
                    result = op2 + op1;
                    break;
                case '-':
                    result = op2 - op1;
                    break;
                case '*':
                    result = op2 * op1;
                    break;
                case '/':
                    result = op2 / op1;
                    break;
                case '%':
                    result = op2 % op1;
                    break;
                
            }
            st.push(result);
        }
    }
    return st.top();
}

int main() {

    cout << postfix_evaluation("23*5-");

    return 0;
}
