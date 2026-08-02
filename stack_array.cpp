#include<iostream>
#define SIZE 10

using namespace std;

class Stack {
    int arr[SIZE];
    int top;
public:
    Stack(){
        top = -1;
    }
    void push(int val){
        if(top == SIZE-1){
            cout << "Stack Overflow.." << endl;
            return;
        }
        arr[++top] = val;

    }
    int pop(){
        if(top == -1){
            cout << "Stack Underflow.." << endl;
            return -1;
        }
        return arr[top--];
    }
    
    
};

int main() {

    

    return 0;
}
