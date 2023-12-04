#include <iostream>
#include <bits/stdc++.h>
using namespace std;

const int MAX_SIZE = 100;

bool uniqueOccurrences(int arr[], int size) {
    int frequency[MAX_SIZE] = {0};
    bool occurrenceSet[MAX_SIZE] = {false};

    // Count occurrences of each element 
    for(int i=0 ; i < size ; i++) {
        frequency[arr[i]]++;
    }

    // Use an array to check for uniqueness of occurrences
    for(int i = 0 ; i < MAX_SIZE ; i++) {
        if(frequency[i] != 0) {
            // if the count is already marked, it's not unique.
            if(occurrenceSet[frequency[i]]) {
                return false;
            }

            occurrenceSet[frequency[i]] = true;
        }
    }
    return true;
}

// Suppose arr = {1, 2, 2, 1, 1, 3}. The frequency array is initialized with zeros. As we iterate through the array:

// For the first element (arr[0] = 1), frequency[1] is incremented by 1.
// For the second element (arr[1] = 2), frequency[2] is incremented by 1.
// For the third element (arr[2] = 2), frequency[2] is incremented by 1 again.
// And so on...


// occurrenceSet[frequency[i]]: Here, frequency[i] is used as an index to access the corresponding element in the occurrenceSet array. The value at this index indicates whether a count of occurrences equal to i has been encountered before.

int main() {

    int arr[] = {1, 2, 2, 1, 1, 3};
    int size = sizeof(arr)/sizeof(arr[0]);

    if(uniqueOccurrences(arr, size)) {
        cout << "The number of occurrences is unique.\n";
    } else {
        cout << "the number of occurrences is not unique.\n";
    }

    return 0;
}