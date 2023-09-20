#include <iostream>
#include <math.h> 
using namespace std;

int main () {

    int n;
    cout << "Enter the value of n : ";
    cin >> n;

    int i = 0;
    int ans = 0;
    while(n!=0) {
        int bit = n&1; 
        ans = (bit * pow(10,i)) + ans;
        n = n>>1;
        i++;
    }

    cout << "The answer is : " << ans << endl; 
    return 0;
}
    // C++ program to convert a decimal
// number to binary number


// function to convert decimal to binary
// void decToBinary(int n)
// {
// 	// array to store binary number
// 	int binaryNum[32];

// 	// counter for binary array
// 	int i = 0;
// 	while (n > 0) {

// 		// storing remainder in binary array
// 		binaryNum[i] = n % 2;
// 		n = n / 2;
// 		i++;
// 	}

// 	// printing binary array in reverse order
// 	for (int j = i - 1; j >= 0; j--)
// 		cout << binaryNum[j];
// }

// // Driver program to test above function
// int main()
// {
// 	int n = 18;
// 	decToBinary(n);
// 	return 0;
// }


 /* to print numbers in reverse direction -->
    ans = (digit * pow(10,i)) + answer;

    to print numbers as it is -->
    ans = (ans * 10) + digit */
