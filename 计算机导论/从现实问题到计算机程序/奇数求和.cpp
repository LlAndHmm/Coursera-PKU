#include<iostream>
	using namespace std;
	int main() {
		int m, n;
		int add = 0;
		cout<< "������m��n��m������n����n������300" <<endl; 
		cin>>m>>n;
		while(m <= n) {
			if( m % 2 == 0 ) {
				if( n % 2 == 0 ) {
					for( int i = m + 1; i < n; i = i + 2 ) {
						add = add + i;
				}break;
			} 	else {
					for( int i = m + 1; i <= n; i = i + 2 ) {
						add = add + i;
				}break;
			}
		} else {
			if( n % 2 == 0 ) {
				for( int i = m; i < n; i = i + 2 ) {
					add = add + i;
				}
				break;
			} else {
				for( int i = m; i <= n; i = i + 2 ) {
					add = add + i;
				}break;
			}
		}
	} 
		
		cout<<add<<endl;
	} 
