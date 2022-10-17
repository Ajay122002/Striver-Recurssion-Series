#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ull unsigned long long int

//Time Complexity = O(n/2)
//Space Complexity = O(n/2)


// Reversing an array using recurssion
void recurr(vector<int>&vec, int ind) {
	if (ind >= vec.size() / 2)
		return;
	swap(vec[ind], vec[vec.size() - ind - 1]);
	recurr(vec, ind + 1);
}

// To check whether the given string is palindrome or not
bool check(string str, int ind) {
	if (ind >= str.length() / 2)
		return true;
	if (str[ind] != str[str.length() - ind - 1]) return false;
	return check(str, ind + 1);
}


int main() {
	// 1.
	vector<int>vec = {1, 2, 3, 4, 1};
	recurr(vec, 0);
	for (auto i : vec)
		cout << i << " ";

	// 2.
	string str = "MADAM";
	string str2 = "MADMAN";

	if (check(str, 0))
		cout << "Palindrome" << endl;
	else
		cout << "Not a Palindrome" << endl;

	if (check(str2, 0))
		cout << "Palindrome" << endl;
	else
		cout << "Not a Palindrome" << endl;

	return 0;
}