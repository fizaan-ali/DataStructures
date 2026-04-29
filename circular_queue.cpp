#include<iostream>
#define capacity 5

using namespace std;

class Circular_Queue {
private:
    int* arr;
    int front; 
    int rear;
    int currSize;
public:
    Circular_Queue(){
        arr = new int[capacity];
        front = -1;
        rear = -1;
        currSize = 0;
    }
    void enqueue(int val){
        if(currSize == capacity){
            cout << "Queue Overflow" << endl;
            return;
        }
        rear = (rear + 1) % capacity;
        arr[rear] = val;
        currSize++;
        if(front == -1){
            front++;
        }
    }
    void dequeue(){
        if(currSize==0){
            cout << "There is nothing to show in queue" << endl;
            return;
        }
        front = (front + 1) % capacity;
        currSize--;
    }
    int  peek(){
        if(currSize == 0){
            cout << "Queue is empty" << endl;
        }
        return arr[front];
    }
    void values(){
        cout << "Front value: " << front << endl; 
        cout << "Rear value: " << rear << endl; 
        cout << "Current size: " << currSize << endl;
    }
};

int main(){

    Circular_Queue q;
    // q.dequeue();
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.enqueue(5);
    q.values();
    q.enqueue(6);
    q.dequeue();
    q.dequeue();
    q.values();

    return 0;
}