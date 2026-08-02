#include<iostream>
#include<vector>

using namespace std;

int max(vector<int> &arr){
    int largest = arr[0];
    for(int i=1; i<arr.size(); i++){
        if(arr[i]>largest){
            largest = arr[i];
        }
    }
    return largest;
}
void counting_sort(vector<int> &arr){
    int maxElement = max(arr);
    vector<int> count(maxElement+1,0);
    for(int x: arr){
        count[x]++;
    }
    int index = 0;
    for(int i=0; i<=maxElement; i++){
        while(count[i]>0){
            arr[index++] = i;
            count[i]--;
        }
    }
}

int main() {

    vector<int> arr = {1,3,2,8,9,2,9,3,8,7,6};

    counting_sort(arr);

    for(int val: arr){
        cout << val <<  " ";
    }

    return 0;
}
