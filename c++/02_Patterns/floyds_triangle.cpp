#include <iostream>
using namespace std;

int main() {

    // floyd's triangle 

    int n;
    cin >> n;

    int num = 1;

    for(int i=1 ; i<=n ; i++) {
        for(int j=1 ; j<=i ; j++) {
            cout << num << " ";
            num++;
        }cout << endl;
    }
    
    return 0;
}