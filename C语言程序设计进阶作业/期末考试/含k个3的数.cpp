#include<iostream>
using namespace std;
int main() {
	int m, k; 			//1 < m < 100000,1 < k < 5;�ж����ܷ�19�����Һ�k���� 
	cin >> m >> k;
	
	int count = 0;
	if( m % 19 == 0) {
		while(m != 0) {
			if(m % 10 == 3)
			count++;
			m = m / 10;
		}
		if( count == k )
			cout << "YES" << endl;
		else
			cout << "NO" << endl; 
	} 
	else {
		cout << "NO" << endl;
	}
	return 0;
}
