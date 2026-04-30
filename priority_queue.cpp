#include<iostream>
using namespace std;

class item {
public:
    int element;
    int priority;

};

class Priority_Queue {
private:
    int size;
    int currSize;
    item* data;
public:
    Priority_Queue(){
        size = 5;
        currSize = 0;
        data = new item[size];
    }
    Priority_Queue(int size){
        this->size = size;
        currSize = 0;
        data = new item[size];
    }
    bool enqueue(int element, int priority){
        if(currSize == size){
            item* newData = new item[size+size];

            for(int i=0; i<size; i++){
                newData[i] = data[i];
            }
            size = size*2;
            delete[] data;
            data = newData;
            newData = NULL;
        }
        data[currSize].element = element;
        data[currSize].priority = priority;
        currSize++;

        for(int i=currSize-1; i>0; i--){
            if(data[i].priority < data[i-1].priority){
                swap(data[i],data[i-1]);
            }
            else 
                break;
        }
    }
};


int main(){

    

    return 0;
}