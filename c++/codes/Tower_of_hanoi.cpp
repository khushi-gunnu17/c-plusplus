#include <iostream>
using namespace std;

void towerOfHanoi(int n, char from, char to , char mid) {
    if(n == 0) {
        return;
    }

    towerOfHanoi(n-1, from, to , mid);

    cout << "Move disk : " << n << " from rod : " << from << " to rod : " << to  << endl;

    towerOfHanoi(n-1 , mid, to , from);    
}

int main() {

    int n;
    cout << "Enter the number of disks : ";
    cin >> n;

    towerOfHanoi(n, 'A', 'C', 'B');

    return 0;
}