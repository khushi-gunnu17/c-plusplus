#include <iostream>
using namespace std;

void reachHome(int src, int dest) {

    cout << "source : " << src << ", Destination : " << dest << endl;
    if(src == dest) {       // Base case
        cout << "I have reached home." << endl;
        return;
    }

    src++;      // Processing
    
    reachHome(src , dest);
    
}

int main() {
    int src = 1;
    int dest = 10;

    cout << endl;
    reachHome(src , dest);
    cout << endl;
    
    return 0;
}