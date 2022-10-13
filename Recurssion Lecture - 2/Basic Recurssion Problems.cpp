#include<bits/stdc++.h>
using namespace std;

void name(int n){
	if(n == 6)
		return;
	cout<<"Ajay"<<endl;
	name(n+1);
}

void OneToN(int n){
	if(n == 6)
		return;
	cout<<n<<endl;

	OneToN(n+1);
}

void NToOne(int n){
	if(n == 0)
		return;
	cout<<n<<endl;
	NToOne(n-1);
}

void OneToNBaktrak(int n){
	if(n == 0) return;
	OneToNBaktrak(n-1);
	cout<<n<<endl;
}

void NToOneBaktrak(int n){
	if(n == 6) return;
	NToOneBaktrak(n+1);
	cout<<n<<endl;
}

int main(){
	cout<<"Printing my name 5 times:-"<<endl;
	name(1);
	cout<<endl;
	
	cout<<"printing linearly from 1 to 5:-"<<endl;
	OneToN(1); 
	cout<<endl;
	
	cout<<"Printing linearly from 5 to 1:-"<<endl;
	NToOne(5);
	cout<<endl;

	cout<<"Printing linearly from 1 to 5 using backtracking:-"<<endl;
	OneToNBaktrak(5);
	cout<<endl;

	cout<<"Printing linearly from 5 to 1 using backtracking:-"<<endl;
	NToOneBaktrak(1);
	cout<<endl;
	
	return 0;
}