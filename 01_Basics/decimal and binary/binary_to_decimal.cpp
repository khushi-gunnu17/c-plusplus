#include <iostream>
#include <math.h> 
using namespace std;

// https://www.geeksforgeeks.org/program-binary-decimal-conversion/

int main () {

    int n;
    cout << "Enter the value of n : ";
    cin >> n;

    int ans = 0;
    int i = 0;

    while(n!=0) {
        int digit = n % 10;

        if(digit == 1) {
        ans = ans + pow(2,i);
        }

        n = n/10;
        i++; 
    }

    cout << ans << endl; 

    return 0;
}








// // C++ program to convert binary to decimal 
// #include <iostream> 
// using namespace std; 

// // Function to convert binary to decimal 
// int binaryToDecimal(int n) 
// { 
// 	int num = n; 
// 	int dec_value = 0; 

// 	// Initializing base value to 1, i.e 2^0 
// 	int base = 1; 

// 	int temp = num; 
// 	while (temp) { 
// 		int last_digit = temp % 10; 
// 		temp = temp / 10; 

// 		dec_value += last_digit * base; 

// 		base = base * 2; 
// 	} 

// 	return dec_value; 
// } 

// // Driver program to test above function 
// int main() 
// { 
// 	int num = 10101001; 

// 	cout << binaryToDecimal(num) << endl; 
// } 









// // C++ program to convert binary to decimal 
// // when input is represented as binary string. 
// #include <iostream> 
// #include <string> 
// using namespace std; 

// // Function to convert binary to decimal 
// int binaryToDecimal(string n) 
// { 
// 	string num = n; 
// 	int dec_value = 0; 

// 	// Initializing base value to 1, i.e 2^0 
// 	int base = 1; 

// 	int len = num.length(); 
// 	for (int i = len - 1; i >= 0; i--) { 
// 		if (num[i] == '1') 
// 			dec_value += base; 
// 		base = base * 2; 
// 	} 

// 	return dec_value; 
// } 

// // Driver program to test above function 
// int main() 
// { 
// 	string num = "10101001"; 
// 	cout << binaryToDecimal(num) << endl; 
// } 
