#include<iostream>
#include<vector>

using namespace std;

void max_heapify(vector<int> &arr, int n, int i){
    int largest = i;
    int left = 2*i + 1;
    int right = 2*i + 2;
    if(left < n && arr[left]>arr[largest]){
        largest = left;
    }
    if(right < n && arr[right]>arr[largest]){
        largest = right;
    }
    if(largest!=i){
        swap(arr[i], arr[largest]);
        max_heapify(arr, n, largest);
    }
}

void heap_sort(vector<int> &arr, int n){
    // First, build max heap from array
    for(int i=n/2-1; i>=0; i--){
        max_heapify(arr, n, i);
    }
    // now heap sort
    for(int i=n-1; i>0; i--){
        swap(arr[0], arr[i]);
        max_heapify(arr, i, 0);
    }
}

int main() {

    vector<int> arr = {2,9,7,0,1,3};
    int n = arr.size();

    heap_sort(arr, n);

    cout << "Sorted Array: ";
    for(int val: arr){
        cout << val << " ";
    }

    return 0;
}
