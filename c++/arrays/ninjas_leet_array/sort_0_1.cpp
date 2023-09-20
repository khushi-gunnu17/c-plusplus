#include <iostream>
using namespace std;

// Two pointer approach 

void printArray(int arr[], int n) {
    cout << "The array is : ";
    for(int i=0; i<n ; i++) {
        cout << arr[i] << " "; 
    }
}

void sortArray(int arr[], int n) {
    int s = 0;
    int e = n-1;

    int step = 0;
    while(s<e) {

        while(arr[s]==0 && s<e) {
            s++;
        }

        while(arr[e]==1 && s<e) {
            e--;
        }

        // have reached till s=1 & e=0;
        if(s<e) {
        swap(arr[s], arr[e]);
        s++;
        e--;
        }
    }
    return;
}

int main () {

    int arr[8] = {1 , 1 , 0 , 0 , 1 , 0 ,1 , 0};

    sortArray(arr, 8);
    printArray(arr, 8); 

    return 0;
}