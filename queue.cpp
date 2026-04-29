#include<iostream>
#define n 20
using namespace std;

class Queue {
private:
    int* arr;
    int front;
    int rear;
public:
    Queue(){
        arr = new int[n];
        front = rear = -1;
    }
    void enqueue(int val){
        if(rear == n - 1){
            cout << "Queue Overflow" << endl;
        }
        rear++;
        arr[rear] = val;
        if(front==-1){
            front++;
        }
    }
    int dequeue(){
        if(front==-1 || front>rear){
            cout << "There is nothing to see in queue." << endl;
        }
        int temp = arr[front];
        front++;
        return temp;
    }
    int  peek(){
        if(front==-1 || front>rear){
            cout << "There is nothing to see in queue." << endl;
            return -1;
        }
        return arr[front];
    }
    void values(){
        cout << "Front value: " << front << endl;
        cout << "Rear value: " << rear << endl;
    }
};

int main(){

    Queue q;
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(5);
    q.enqueue(7);
    q.enqueue(10);

    q.values();

    for(int i=0; i<5; i++){
        cout << q.dequeue() << " ";
    }
    cout << endl;

    q.values();

    q.enqueue(11);

    q.values();

    return 0;
}