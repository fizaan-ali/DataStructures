#include<iostream>
using namespace std;

// this is the standard method of shell sort. alternative one.

void shell_sort(int arr[], int n){
    for(int gap=n/2; gap>0; gap/=2){
        for(int i=gap; i<n; i++){
            int temp = arr[i];
            int j = i;
            while(j>=gap && arr[j-gap]>temp){
                arr[j] = arr[j-gap];
                j-=gap;
            }
            arr[j] = temp;
        }
    }
}

int main(){

    int arr[] = {3,8,2,9,6,4,7};
    int n = sizeof(arr)/sizeof(arr[0]);

    int gap = n/2;
    while(gap>0){
        for(int j=gap; j<n; j++){
            for(int i=j-gap; i>=0; i=i-gap){
                if(arr[i]>arr[i+gap]){
                    swap(arr[i], arr[i+gap]);
                }
            }
        }
        gap /= 2;
    }
    
    for(int i: arr)
        cout << i << " ";

    return 0;
}