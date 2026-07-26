#include<iostream>

using namespace std;

void bubble_sort(int arr[], int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i-1; j++){
            if(arr[j]>arr[j+1])
                swap(arr[j],arr[j+1]);
        }
    }
}
void selection_sort(int arr[], int n){
    for(int i=0; i<n-1; i++){
        int minIndex = i;
        for(int j=i+1; j<n; j++){
            if(arr[j]<arr[minIndex])
                minIndex = j;
        }
        swap(arr[i], arr[minIndex]);
    }
}
void insertion_sort(int arr[], int n){
    for(int i=1; i<n; i++){
        int key = arr[i];
        int j = i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
    
}
int main() {

    int arr[] = {1,5,7,3,2,7,9,10};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout << "Unsorted Array: ";
    for(int i: arr)
        cout << i << " ";
    cout << endl;
    cout << "Sorted Array: ";
    insertion_sort(arr, n);
    for(int i: arr)
        cout << i << " ";

    return 0;

}



void bubble_sort(int arr[], int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i-1; j++){
            if(arr[j]>arr[j+1])
                swap(arr[j], arr[j+1]);
        }
    }
}
void selection_sort(int arr[], int n){
    for(int i=0; i<n; i++){
        int minIndex = i;
        for(int j=i+1; j<n; j++){
            if(arr[j]<arr[minIndex])
                minIndex = j;
        }
        swap(arr[i], arr[minIndex]);
    }
}
void insertion_sort(int arr[], int n){
    for(int i=1; i<n; i++){
        int key = arr[i];
        int j = i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}
