#include<iostream>
	using namespace std;
	int main() {
		int k, num[100];
		int a = 0, b = 0, c = 0;		//��a��b��c�ֱ��ʾ1,5,10���ֵĴ���
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
