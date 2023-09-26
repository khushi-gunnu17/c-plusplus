#include <iostream>
using namespace std;

int getSum(int arr[], int size) {
    // Base case
    if(size == 0) {
        return 0;
    }

    if(size == 1) {
        return arr[0];
    }

    int remainingPart = getSum(arr + 1, size - 1);
    int sum = arr[0] + remainingPart;
    return sum;
}

int main() {
    int arr[6] = {1, 2, 3, 4, 5, 6};
    int size = 6;

    int ans = getSum(arr, size);

    cout << "The sum is : " << ans << endl;

    return 0;
}
