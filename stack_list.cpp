#include<iostream>

using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node(int val){
        data = val;
        next = NULL;
    }
};

class Stack {
    Node* top;
public:
    Stack(){
        top == NULL;
    }

    void push(int val){
        Node* newNode = new Node(val);
        if(top==NULL){
            top = newNode;
        }
        newNode->next = top;
        top = newNode;
    }
    int pop(){
        if(top==NULL){
            cout << "Stack Underflow.." << endl;
            return -1;
        }
        Node* temp = top;
        top = top->next;
        int val = temp->data;
        delete temp;
        return val;
    }
};

int main() {

    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);

    return 0;
}
