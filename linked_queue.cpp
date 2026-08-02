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

class Queue {
    Node* front;
    Node* rear;
public:
    Queue(){
        front = rear = NULL;
    }
    void enqueue(int val){
        Node* newNode = new Node(val);
        if(front == NULL && rear == NULL){
            front = rear = newNode;
            return;
        }
        rear->next = newNode;
        rear = newNode;
    }
    int dequeue(){
        if(front == NULL && rear == NULL){
            cout << "Queue Underflow" << endl;
            return -1;
        }
        Node* temp = front;
        front = front->next;
        int val = temp->data;
        delete temp;
        if(front == NULL){
            rear = NULL;
        }
        return val;
    }
};

int main() {

    

    return 0;
}
