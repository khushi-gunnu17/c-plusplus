#include <iostream>
using namespace std;

string removeDuplicates(string s) {
    string res;
    for(char ch : s) {
        if(!res.empty() && res[res.size()-1] == ch) 
            res.pop_back();
        else 
            res += ch;
    } 
    return res; 
}

int main() {
    string s = "abbaca";
    cout << removeDuplicates(s) << endl;

    return 0;
}
