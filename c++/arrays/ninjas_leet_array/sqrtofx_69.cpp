#include <iostream>
using namespace std;

long long int sqrtInt(int  num) {
    int start = 0;
    int end = num;

    long long int mid = start + (end - start)/2;
    long long int ans = -1;
    while(start<= end) {
        long long int square = mid*mid;

        if(square == num) {
            return mid;
        }
        if (square < num) {
            ans = mid;
           start = mid + 1;
        }
        else {
            end = mid - 1;
            
        }
        mid = start + (end - start)/2;
    }
    return ans;
}

double morePrecision(int num, int precision, int tempSol) {

    double factor = 1;
    double ans = tempSol;
    for(int i=0; i<precision; i++) {
        factor = factor/10;
        
        for(double j = tempSol; j*j < num ; j = j + factor) {
            ans = j;
        }
    } 
    return ans;
}

int main() {

    int num;
    cout << "Enter the number : ";
    cin >> num;

    // integer part only
    cout << "The square root of the number is : " << sqrtInt(num) << endl;

    int tempSol = sqrtInt(num);
    cout << "The answetr is : " << morePrecision(num, 3, tempSol);
    return 0;
}