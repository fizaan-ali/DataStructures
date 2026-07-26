#include<iostream>
#include<vector>

using namespace std;

int partition(vector<int> &arr, int low, int high){
    int pivot = arr[high];
    int i = low - 1;
    for(int j=low; j<high; j++){
        if(arr[j]<pivot){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1], arr[high]);
    return i+1; // pivot
}

void quick_sort(vector<int> &arr, int low, int high){
    if(low<high){
        int pivotIndex = partition(arr, low, high);
        quick_sort(arr, low, pivotIndex-1);
        quick_sort(arr, pivotIndex+1, high);
    }
}

int main() {

    vector<int> arr = {3,8,2,9,1,0};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    cout << "Unsorted  Array: ";
    for(int val: arr){
        cout << val << " ";
    }
    cout << endl;

    quick_sort(arr, 0, arr.size()-1);

    cout << "Sorted Array: ";
    for(int val: arr){
        cout << val << " ";
    }

    return 0;
}


// int partition(vector<int> &arr, int low, int high){
//     int pivot = arr[high];
//     int i = low - 1;
//     for(int j=low; j<high; j++){
//         if(arr[j]<pivot){
//             i++;
//             swap(arr[i],arr[j]);
//         }
//     }
//     swap(arr[i+1],arr[high]);
//     return i+1;
// }

// void quick_sort(vector<int> &arr, int low, int high){
//     if(low<high){
//         int pivotIndex = partition(arr, low, high);
//         quick_sort(arr, low, pivotIndex-1);
//         quick_sort(arr, pivotIndex+1, high);
//     }
// }