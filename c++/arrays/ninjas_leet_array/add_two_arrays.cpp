#include <iostream>
#include <vector> 
using namespace std;

vector <int> reverse(vector <int> v) {
	int s = 0;
	int e = v.size()-1;

	while(s<=e) {
		swap(v[s++], v[e--]);
	}
	return v;
}
vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m) {
	int i = n-1;
	int j = m-1;
	vector <int> ans;
	int carry = 0;

	while(i>=0 && j>=0) {
		int val1 = a[i];
		int val2 = b[j];

		int sum = val1 + val2 + carry;

		carry = sum/10;
		sum = sum%10;
		i--;
		j--;

		ans.push_back(sum);
	}

	// first case
	while(i>=0) {
		int sum = a[i] + carry;
		carry = sum/10;
		sum = sum%10;
		ans.push_back(sum);
		i--;
	}

	// second case
	while(j>=0) {
		int sum = b[j] + carry;
		carry = sum/10;
		sum = sum%10;
		ans.push_back(sum);
		j--;
	}

	while(carry != 0) {
		int sum = carry;
		carry = sum/10;
		sum = sum%10;
		ans.push_back(sum);
	}
	// print(ans);
	return reverse(ans);
}

int main() {

    vector <int> arr1(5);

    arr1.push_back(5);
    arr1.push_back(4);
    arr1.push_back(9);
    arr1.push_back(6);

    vector <int> arr2(5);
    arr2.push_back(5);
    arr2.push_back(6);

	findArraySum(arr1, 5, arr2, 5);
    
    

    return 0;
}