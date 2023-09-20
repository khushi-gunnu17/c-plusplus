#include <iostream>
using namespace std;

int readMatrix(int arr[], int n) {
    for(int i=0; i<n; i++) {
        for(int j= 0; j<n ; j++) {
            cin >> arr[i][j];
        }
    }cout << endl;
    return 0;
}

int main() {
    int mat1[3][3], mat2[3][3] , mat3[3][3], i, j;

    cout << "Enter the elemnts of first matrix : " <<endl;
    readMatrix(mat1, 3)

    cout << "Enter the elemnts of second matrix : " <<endl;
    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            cin >> mat2[i][j];
        }
    }

    cout << "Adding the two matrix : " <<endl;
    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            mat3[i][j] = mat1[i][j] + mat2[i][j];
        }
    } cout << endl;

    cout << "Enter the elemnts of first matrix : " <<endl;
    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            cin >> mat1[i][j];
        }
    }
    
    
    return 0;
}