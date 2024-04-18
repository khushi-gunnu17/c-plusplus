#include <bits/stdc++.h>
using namespace std;

// first non repeating char in a stream
string FirstNonRepeating(string A){
	unordered_map<char, int> count;
    queue<int> q;

    string ans = "";

    for (int i = 0; i<A.length() ; i++) {
        char ch = A[i];
        
        // increase the count of ch
        count[ch]++;

        // push into the queue
        q.push(ch);

        while(!q.empty()) {
            if(count[q.front()] > 1) {
                // repeating character
                q.pop();
            } else {
                ans.push_back(q.front());
                break;
            }
        }

        if(q.empty()) {
            ans.push_back('#');
        }
    }
    return ans;
}


// first non repeating char
char firstNonRepeatingCharacter(string str) {

    unordered_map<char, int> charCount;

    // traversing the string to count occureences.
    for(char ch : str) {
        charCount[ch]++;
    }

    // finding the first non - repeating character
    for (char ch : str) {
        if(charCount[ch] == 1) {
            // returning the first non - repeating charcter
            return ch;
        }
    }

    // If no non-repeating character found, return the first character of the string
    return str[0];
}



int main() {

    string str;
    cout << "Enter s string to count non repeating char in a stream : ";
    cin >> str;

    string result = FirstNonRepeating(str);

    cout << "First non repeating char in a stream is : " << result << endl;



    string s;
    cout << "Enter a string to count the first non - repeated character : ";
    cin >> s;

    char result = firstNonRepeatingCharacter(s);

    cout << "First non repeating char is : " << result << endl;


    return 0;
}