#include<iostream>
#define SIZE 10
using namespace std;

class Stack {
    int top;
    int arr[SIZE];
public:
    Stack(){top = -1;}

    void push(int val){
        if(top==SIZE - 1){
            cout << "Stack Overflow!" << endl;
            return;
        }
        top++;
        arr[top] = val;
    }
    int pop(){
        if(top==-1){
            cout << "Stack underflow!" << endl;
            return -1;
        }
        else{
            int val = arr[top];
            top--;
            return val;
        }
    }
    string binary(int decimal){
        top == -1;
        while(decimal>0){
            int remainder = decimal % 2;
            push(remainder);
            decimal = decimal/2;
        }
        string temp;
        while(top!=-1){
            temp += to_string(pop());
        }
        return temp;
    }
};

int main(){

    Stack s;
    cout << s.binary(12);
    

    return 0;
}