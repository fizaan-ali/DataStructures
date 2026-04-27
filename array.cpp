#include<iostream>
using namespace std;

int main(){

    int arr[10] = {1,2,3,5,7};

    // size of array

    int size = sizeof(arr)/sizeof(arr[0]);

    // Traversing

    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }

    return 0;
}