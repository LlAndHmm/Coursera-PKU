#include<iostream>
using namespace std;

int main() {
	int a[100],n,temp;
	int *pl = NULL, *pr = NULL;	
	cin>>n;
	for(int i = 0; i < n; i++)
		cin>>a[i];
	for(pl = a, pr = a + n - 1; pl < pr; pl++,pr--) {
		temp = *pl;
		*pl = *pr;
		*pr = temp;
	} 
	for(int i = 0; i < n; i++)
		cout<<a[i]<<" ";
} 
