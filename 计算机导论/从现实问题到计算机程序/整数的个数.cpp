#include<iostream>
	using namespace std;
	int main() {
		int k, num[100];
		int a = 0, b = 0, c = 0;		//用a，b，c分别表示1,5,10出现的次数
		cin>>k; 
		for ( int i = 0; i < k; i++ )
		cin>>num[i];
		for ( int i = 0; i < k; i++ ) {
			if( num[i] == 1 )
			a++;
			if( num[i] == 5 )
			b++;
			if( num[i] == 10 )
			c++; 
		}
		cout<<a<<endl<<b<<endl<<c<<endl;
	}
