#include <iostream>
using namespace std;

string replaceSpaces(char str[], int n){
	string temp = "";

	for(int i=0; i<n; i++) {
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

    char arr[50];
    cout << "Enter the word : ";
    cin.getline(arr, 50);

    cout << replaceSpaces(arr, 50) << endl;

    return 0;
}

// Code not working properly