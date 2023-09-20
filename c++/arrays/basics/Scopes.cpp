#include <iostream>
using namespace std;

void updateArray(int arr[], int n) {

    cout << "Inside the function : " << endl;

    //updating the array

    arr[0] = 120;

    // Printing the array
    for(int i=0 ; i<3; i++) {
        cout << arr[i] << " ";
    } cout << endl;

    cout << " Going back to the main function : " << endl;
    return; 
}

int main () {

    int arr[3] = {1,2,3};

    updateArray(arr, 3);
    //Printing the array 

    for(int i=0 ; i<3; i++) {
        cout << arr[i] << " ";
    } cout << endl;
    return 0;
}