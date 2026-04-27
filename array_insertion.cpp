#include<iostream>
#define MAXSIZE 10
using namespace std;

int main(){

    int arr[MAXSIZE] = {1,3,4,9};
    int current_size = 4;

    // now insertion at end is simple. just put the value in that index. e.g. 

    // arr[4] = 7; -> last index

    // Now insertion at middle or any other index.....
    // first shift all values from that index right and then insert

    int pos = 2;
    int val = 7;
    // shift values by one right from that index
    for(int i=current_size; i>=pos; i--){
        arr[i+1] = arr[i];
    }
    // then insert tht value at that index
    arr[pos] = val;

    for(int i: arr)
        cout << i << " ";


    return 0;
}