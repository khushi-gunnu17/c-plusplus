#include <iostream> 
using namespace std;

void getMatrix(int arr[15][15], int row, int col) {
    for(int i=0; i<row ; i++) {
        for(int j=0 ; j<col ; j++) {
            cin >> arr[i][j];
        } 
    } cout << endl;
}

int printMatrix(int arr[15][15], int row, int col) {
    for(int i=0; i<row ; i++) {
        for(int j=0 ; j<col ; j++) {
            cout << arr[i][j] << " ";
        } cout << endl;
    } return 0;
}

int main() {

    int a[15][15] = {{1, 2}, {3, 4}};
    int b[15][15] = {{2, 4}, {3, 6}};

    int arr[15][15], row, col;

    cout << "Enter the number of rows : ";
    cin >> row;

    cout << "Enter the number of col : ";
    cin >> col;

    // cout << "Enter the first matrix elements : ";
    // getMatrix(a, row, col);

    // cout << "Enter the sceond matrix elements : ";
    // getMatrix(b, row, col);

    cout << "Multiplication of the matrix is : " << endl;
    for(int i=0; i<row; i++) {
        for(int j=0; j<col; j++) {
            arr[i][j] = 0;
            for(int k=0; k<col ; k++) {
                arr[i][j] += a[i][k] * b[k][j];
            } 
        }
    }

    printMatrix(arr , row, col);
    // cout << ans << endl;

    int transpose[20][20];
    cout << "The transpose of a matrix is : " << endl;
    for(int i=0; i<row ; ++i) {
        for(int j=0; j<col ; ++j) {
            transpose[j][i] = a[i][j];
        }
    }



    for(int i = 0 ; i<col ; i++) {
        for(int j =0; j<row ; j++) {
            cout << transpose[i][j] << " ";
        } cout << endl;
    }

    return 0;
}