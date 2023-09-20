#include <iostream>
using namespace std;

int getMin(int num[], int n) {
    int min = INT32_MAX;

    for(int i = 1; i<n; i++) {
       if(num[i] < min) {
        min = num[i];
       } 
    }
    return min;
}

int getMax(int num[], int n) {
    int maxi = INT32_MIN;

    for(int i = 1; i<n; i++) {
        //Pre - defined function 
        maxi = max(maxi, num[i]);
    //    if(num[i] > max) {
    //     max = num[i];
    //    } 
    }
    return maxi;
}

int main() {
    int size;
    cout << "Enter the value of size : ";
    cin >> size;

    int num[5];

    for(int i = 1; i<size ; i++) {
        cin >> num[i];
    }

    cout << "Maximum value is : " << getMax(num, size) << endl;
    cout << "Minimum value is : " << getMin(num, size) << endl;

    return 0;
}