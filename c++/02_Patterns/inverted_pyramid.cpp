#include <iostream>
using namespace std;

int main() {

    // inverted half pyramid 

    // int n;
    // cin >> n;

    // for(int i = n; i>=1; i--) {
    //     for(int j=1; j<=i ; j++) {
    //         cout << "* " ;
    //     }
    //     cout << endl;
    // }

    // half pyramid after 180degree rotation 

    int n;
    cin >> n;

    for(int i = 1; i<=n ; i++) {
        for(int j=1; j<=n; j++) {
            if(j<=n-i) {
                cout << "  ";
            } else {
                cout << " *";
            }
        }
        cout << endl;
    }
    return 0;
}