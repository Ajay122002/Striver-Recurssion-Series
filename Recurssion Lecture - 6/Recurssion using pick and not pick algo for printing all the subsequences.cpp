#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ull unsigned long long int
// SubSequence :- A contiguous / non- Contiguious sequence which follows the order
//Time Complexity = O(2^n)
//Space Complexity = O(n) ->Depth of the recurssion

//Printing all the subsequences using pick and not pick algorithm
void AllSubsequences(vector<int>&vec, vector<int>&temp, int n, int i) {
	if (i == n) {
		if (temp.size() != 0) {
			for (auto i : temp)
				cout << i << " ";
		} else {
			cout << "{}";
		}
		cout << endl;
		return;
	}
	temp.push_back(vec[i]);
	AllSubsequences(vec, temp, n, i + 1);
	temp.pop_back();
	AllSubsequences(vec, temp, n, i + 1);
}

int main() {
	vector<int>vec = {3, 1, 2};
	vector<int>temp;
	AllSubsequences(vec, temp, 3, 0);
	return 0;
}