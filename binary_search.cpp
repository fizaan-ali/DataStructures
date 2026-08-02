#include<iostream>

using namespace std;

int binary_search(int val, int n, int* arr){
    int low = arr[0];
    int high = n-1;
    while(low<=high){
        int mid = (low + high) / 2;
        if(arr[mid] == val){
            return mid;
        }
        else if(val < arr[mid]){
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    return -1;
}

int main() {

    int arr[] = {1,2,3,4,5};
    cout << binary_search(6,5,arr);

    return 0;
}
