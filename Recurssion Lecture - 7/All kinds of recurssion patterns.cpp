#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ull unsigned long long int

//Time Complexity = O(2^n)
//Space Complexity = O(n) ->Depth of the recurssion

void AllSubseqSumIsK(vector<int>&vec, vector<int>&temp, int n, int i, int target, int curr_sum) {
	if (i == n) {
		if (target == curr_sum) {
			for (auto i : temp)
				cout << i << " ";
			cout << endl;
		}
		return;
	}

	temp.push_back(vec[i]);
	curr_sum += vec[i];
	AllSubseqSumIsK(vec, temp, n, i + 1, target, curr_sum);
	temp.pop_back();
	curr_sum -= vec[i];
	AllSubseqSumIsK(vec, temp, n, i + 1, target, curr_sum);
}

bool FirstSubseqSumIsK(vector<int>&vec, vector<int>&temp, int n, int i, int target, int curr_sum) {
	if (i == n) {
		if (target == curr_sum) {
			for (auto i : temp) cout << i << " ";
			cout << endl;
			return true;
		} else {
			return false;
		}
	}

	temp.push_back(vec[i]);
	curr_sum += vec[i];
	if (FirstSubseqSumIsK(vec, temp, n, i + 1, target, curr_sum)) return true;
	temp.pop_back();
	curr_sum -= vec[i];
	if (FirstSubseqSumIsK(vec, temp, n, i + 1, target, curr_sum)) return true;
}

int CntSubSeq(vector<int>&vec, int n, int target, int i, int curr_sum) {
	if (i == n) {
		if (curr_sum == target) return 1;
		return 0;
	}
	curr_sum += vec[i];
	int l = CntSubSeq(vec, n, target, i + 1, curr_sum);
	curr_sum -= vec[i];
	int r = CntSubSeq(vec, n, target, i + 1, curr_sum);
	return l + r;
}

int main() {
	vector<int>vec = {1, 1, 2};
	vector<int>temp;

	// 1. Subsequences whose sum is equal to k
	cout << "Subsequences whose sum is equal to k:-" << endl;
	AllSubseqSumIsK(vec, temp, 3, 0, 2, 0);
	cout << endl;

	// 2.Subsequences whose sum is equal to k first occurence
	cout << "Subsequences whose sum is equal to k first occurence:-" << endl;
	FirstSubseqSumIsK(vec, temp, 3, 0, 2, 0);
	cout << endl;

	// 3. Count of all the subsequences of the given array
	cout << "Count of all the subsequences of the given array:-" << endl;
	cout << CntSubSeq(vec, 3, 3, 0, 0) << endl;

	return 0;
}