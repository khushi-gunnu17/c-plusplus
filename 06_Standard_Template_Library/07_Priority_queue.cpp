// The first element of a queue is always greatest.
// maxheap / minheap

#include <iostream>
#include <queue>
using namespace std;

int main () {

    // maxheap
    priority_queue <int> maxi;

    // minheap
    priority_queue <int, vector <int>, greater <int>> mini;

    maxi.push(1);
    maxi.push(3);
    maxi.push(2);
    maxi.push(0);

    int n = maxi.size();            // coz the size value is repeatedly changing in the for loop that's why it need to be initiated here.
    for(int i=0; i<n ; i++) {
        cout << maxi.top() << " ";
        maxi.pop();
    }cout << endl;

    mini.push(5);
    mini.push(1);
    mini.push(0);
    mini.push(4);
    mini.push(3);

    int m = mini.size();
    for(int i=0; i<m ; i++) {
        cout << mini.top() << " ";
        mini.pop();
    }cout << endl;
 
    cout << "Mini Empty or not : " << mini.empty() << endl;      //-->1 = true means empty here coz the values are already popped out.

    return 0;
}