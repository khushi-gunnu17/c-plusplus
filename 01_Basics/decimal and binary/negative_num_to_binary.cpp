#include <iostream>
#include <math.h>
using namespace std;

// https://stackoverflow.com/questions/72098376/i-wrote-a-program-to-convert-a-negative-number-to-binary-is-this-code-correct

int decimalToBinary(int n) {
    float ans = 0;
    int i = 0;

    while(n!=0) {
        int bit = n&1;
        ans = (bit * pow(10, i)) + ans;
        n = n>>1;
        i++;
    }
    return ans;
}

int main() {

    int n;
    cout << "Enter the negative number which is to be converted : ";
    cin >> n;

    if(n < 0) {
        // if number is negative 
        n = n*(-1);
        int ans = decimalToBinary(n);

        // finding 2's complement of the number 
        // 1's comp :
        int newAns = (~ans);

        // 2's comp : 
        newAns = newAns + 1;
        cout << newAns << endl;

    } else {
        // if number is positive 
        int ans = decimalToBinary(n);
        cout << ans << endl;
    }

    return 0;
}









// #include <iostream>
// using namespace std;

// void print_binary(int num)
// {
//     // `result` stores the binary notation of `num` in decimal format
//     int result = 0;

//     // It ignores leading zeros and leading ones
//     int place_value = 1;
//     while (!(num == 0 | num == -1))
//     {
//         // Extracting the rightmost bit from `num`
//         int bit = num & 1;

//         // appending `bit` to `result`
//         result += bit * place_value;

//         // Shifting `num` to the right
//         // so that second bit (from right) now become the rightmost bit
//         num = num >> 1;
//         place_value *= 10;
//     }

//     cout << result << endl;
// }

// int main()
// {
//     int number;
//     cin >> number;
//     int neg_number = ~number + 1; // Took 2's compliment of number

//     print_binary(number);
//     print_binary(neg_number);
// }