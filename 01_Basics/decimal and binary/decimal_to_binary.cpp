// C++ program to convert a decimal
// number to binary number

// https://www.geeksforgeeks.org/program-decimal-binary-conversion/
// link for various approaches to the given problem

#include <iostream>
#include <math.h> 
using namespace std;

/* to print numbers in reverse direction -->
    ans = (digit * pow(10,i)) + answer;

    to print numbers as it is -->
    ans = (ans * 10) + digit */

int main () {

    int n;
    cout << "Enter the value of n : ";
    cin >> n;

    int i = 0;
    float ans = 0;

    while(n!=0) {
        int bit = n&1; 
        ans = (bit * pow(10,i)) + ans;
        n = n>>1;
        i++;
    }

    cout << "The answer is : " << ans << endl; 
    return 0;
}








// // function to convert decimal to binary by using an array 
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
// 	int n;
//     cout << "Enter the number which is to be converted into the binary format : ";
//     cin >> n;
//     decToBinary(n);
//     return 0;
// }


 



// // CPP program to Decimal to binary conversion 
// // using bitwise operator 
// // Size of an integer is assumed to be 32 bits 

// // Function that convert Decimal to binary 
// void decToBinary(int n) 
// { 
// 	// Size of an integer is assumed to be 32 bits 
// 	for (int i = 31; i >= 0; i--) { 
// 		int k = n >> i; 
// 		if (k & 1) 
// 			cout << "1"; 
// 		else
// 			cout << "0"; 
// 	} 
// } 

// // driver code 
// int main() 
// { 
// 	int n = 32; 
// 	decToBinary(n); 
// }
