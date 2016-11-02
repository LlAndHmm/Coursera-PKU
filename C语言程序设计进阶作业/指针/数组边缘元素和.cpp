#include<iostream>
using namespace std;

int cau(int (*p)[100], int m, int n) {
	int sum = 0;
	for( int i = 0; i < n - 1; i++)
		sum = sum + *((*p) + i);
	for( int i = 0; i <= m - 1; i++)
		sum = sum + *((*(p + i)) + n - 1);
	for( int i = 0;i < n - 1; i++ )
		sum = sum + *((*(p + m - 1)) + i);
	for( int i = 1; i < m - 1; i++)
		sum = sum + *((*(p + i))); 
	return (sum); 
}

int main() {
	int m, n, k;				//m代表行，n代表列 ，k代表数据组数 
	int a[100] [100];
	cin >> k;
	while( k != 0) {
		cin >> m >> n;
		for( int i = 0; i < m; i++) {
			for( int j = 0; j < n; j++)
				cin >> a[i] [j]; 
		}
		cout << cau(a, m, n) << endl;
		k--; 
	}	
	return 0;
}
