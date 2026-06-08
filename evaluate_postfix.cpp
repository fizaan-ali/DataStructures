#include<iostream>
#include<stack>
#include<string>

using namespace std;

int evaluate_postfix(string statement){
    stack<int> s;
    int len = statement.length();
    for(int i=0; i<len; i++){
        char ch = statement[i];
        if(ch >= '0' && ch <= '9'){ // if it's digit then push it
            s.push(int(ch-'0'));
        }
        else{
            int a = s.top();
            s.pop();
            int b = s.top();
            s.pop();
            int result;
            switch(ch){
                case '+': result = b + a;
                    break;
                case '-': result = b - a;
                    break;
                case '*': result = b * a;
                    break;
                case '/': result = b / a;
                    break;
            }
            s.push(result);

        }
    }
    return s.top();
}

int main() {

    cout << evaluate_postfix("482*+");

    return 0;
}
