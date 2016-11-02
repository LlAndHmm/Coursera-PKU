#include<iostream> 
using namespace std;
int main() {
	int a[100], n, temp;
	cin>>n;
	for( int i = 0; i < n; i++ )
		cin>>a[i];
	temp = a[0]; 
	for( int i = 1; i < n; i++ ) {
		if( a[i] > temp) {
			temp = a[i];
 		}
	}
	cout<<temp;
} 
