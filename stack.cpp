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
    void display(){
        if(top==-1){
            cout << "Stack is empty!" << endl;
            return;
        }
        for(int i=top; i>=0; i--){
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    int peek(){
        if(top==-1){
            cout << "Stack is empty!" << endl;
            return -1;
        }
        else
            return arr[top];
    }
    int top_value(){
        return top;
    }
};

int main(){

    Stack s;
    s.push(10);
    s.push(9);
    s.push(7);
    s.push(2);
    s.push(3);
    s.display();
    s.pop();
    s.display();
    

    return 0;
}