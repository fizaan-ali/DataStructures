#include<iostream>
using namespace std;

int main(){
    int rows = 3;
    int cols = 3;
    // for addition, both arrays must have same order.
    int m1[rows][cols] = {{1,2,3},{4,5,6},{7,8,9}};
    int m2[rows][cols] = {{1,2,3},{4,5,6},{7,8,9}};

    int r[rows][cols];

    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            r[i][j] = m1[i][j] + m2[i][j];
        }
    }

    cout << "Resultant Matrix: " << endl;
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            cout << r[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}