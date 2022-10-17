#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ull unsigned long long int

//Time Complexity = O(2^n)
//Space Complexity = O(n)// it will be the height of the tree, SO most of the calls will be the height of the tree that is created

int fibo(int n) {
	if (n <= 1) return n;
	return fibo(n - 1) + fibo(n - 2);
}

int main() {
	cout << fibo(6) << endl;
	return 0;
}