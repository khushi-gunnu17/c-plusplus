#include <iostream>
using namespace std;

string replaceSpaces(string str){
	string temp = "";

	for(int i=0; i< str.length() ; i++) {
		if(str[i] == ' ') {
			temp.push_back('@');
			temp.push_back('4');
			temp.push_back('0');
		} else {
			temp.push_back(str[i]);
		}
	}
	return temp;
}

int main() {

    string str;
    cout << "Enter the Sentence : ";
	getline(cin, str);

    cout << replaceSpaces(str) << endl;

    return 0;
}

// h/w = to write this code in the same string without using another string temp.

// T.C = O(n) and same for space 