#include<iostream>
using namespace std;

int main(){

    int rows = 2;
    int cols = 3;
    int arr[rows][cols] = {{1,2,3}, {4,5,6}};

    cout << "2D array/ Matrix: " << endl;
    // traversing
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    // in the memory, it stores row wise -> firstly first row, then second and so on.
    return 0;
}