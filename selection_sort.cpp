#include<iostream>
using namespace std;

int main(){

    int arr[] = {7,2,8,1,3,0};

    int n = sizeof(arr)/sizeof(arr[0]);

    for(int i=0; i<n-1; i++){
        int minIndex = i;
        for(int j=i; j<n; j++){
            if(arr[j]<arr[minIndex]){
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }

    for(int i: arr){
        cout << i << " ";
    }

    return 0;
}