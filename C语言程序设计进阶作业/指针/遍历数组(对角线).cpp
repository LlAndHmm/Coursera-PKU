#include<iostream>
using namespace std;
int main() {
	int a[100] [100];
	int row, col;
	cin >> row >> col;
	for( int i = 0; i < row; i++){
		for( int j = 0; j < col; j++)
			cin >> a[i] [j];
	}
	int (*p)[100] = a;
	int c, r, k;		//k is the number of diagonal line
	k = row + col - 1;
	for( int i = 0; i < k; i++) {
		c = i;
		for( int r = 0; r < row; r++) {
			if( c >= 0 && c <= col - 1 ) 
				cout << *(*(p + r) + c) << endl;
			c--;
		}
		
	} 
}
