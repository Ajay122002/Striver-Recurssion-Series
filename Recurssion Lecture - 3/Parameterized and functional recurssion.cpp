#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ull unsigned long long int

// Time Complexity - O(n)
// Space Complexity - O(n)

int sum(int n) {
	if (n == 0)
		return 0;
	return n + sum(n - 1);
}

int factorial(int n) {
	if (n == 1)
		return 1;
	return n * factorial(n - 1);
}

int main() {
	// int t;
	// cin >> t;
	// while (t--)
	// 	solve();
	cout << sum(7) << endl;
	cout << factorial(5) << endl;
}