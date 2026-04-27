#include<iostream>
using namespace std;

int main(){

    int arr[] = {1,2,3,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);

    int pos = 2;

    for(int i=2; i<size-1; i++){
        arr[i] = arr[i+1];
    }

    // now the last element is still there but we are not concern with it bcz seemingly we have now 4 size array
    for(int i=0; i<4; i++){
        cout << arr[i] << " ";
    }

    return 0;
}