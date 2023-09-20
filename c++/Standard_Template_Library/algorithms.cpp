#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {

    vector <int> v;

    v.push_back(1);
    v.push_back(3);
    v.push_back(6);
    v.push_back(7);

    cout << "the no. is present or not : " << binary_search(v.begin(), v.end(), 6) << endl;
    cout << endl;

    cout << "Lower bound : " << lower_bound(v.begin(), v.end(), 6)-v.begin() << endl;
    cout << "Upper bound : " << upper_bound(v.begin(), v.end(), 4)-v.begin() << endl;

    cout << endl;

    rotate(v.begin(), v.begin()+1, v.end());
    cout << "After rotate : " << endl;
    for(int i:v) {
        cout << i << " ";
    } cout << endl;

    sort(v.begin(), v.end());
    for(int i:v) {
        cout << i << " ";
    } cout << endl;

    // introsort = deep sort + insertion sort + quick sort

    cout << endl;

    int a = 3, b = 5;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << endl;

    cout << "Max = " << max(a,b) << endl;
    cout << "Min = " << min(a,b) << endl << endl;

    swap(a,b);
    cout << "After swapping : " << "a = " << a << endl;

    cout << endl;
    string abcd = "abcd";
    reverse(abcd.begin(), abcd.end());
    cout << "String = " << abcd << endl << endl;

    return 0;
}

// output


// Lower bound : 2
// Upper bound : 2

// After rotate :
// 3 6 7 1
// 1 3 6 7

// a = 3
// b = 5

// Max = 5
// Min = 3

// After swapping : a = 5

// String = dcba