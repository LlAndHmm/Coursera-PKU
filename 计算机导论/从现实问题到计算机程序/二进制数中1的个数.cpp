#include<iostream>
	using namespace std;
	int num(int *p) {
		int count = 0;
		while(*p != 0) {
			if( *p % 2 == 1) 
				count++;
			*p = *p / 2;
		}
		return count;
	}
	int main() {
		int n, a[100];
		cin>>n;
		for(int i = 0; i < n; i++) 
			cin>>a[i];
		for(int i = 0; i < n; i++) 
			cout<<num(&a[i])<<endl;
		
	}
