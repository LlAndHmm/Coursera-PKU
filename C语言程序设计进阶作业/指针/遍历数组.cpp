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
	
	int countCol = 0;

	for( int i = 0; i < col; i++) {
		int c = countCol;
		int r = 0;
		while( c >= 0 ){
			cout << *(*(p + r) + c) <<endl;
			c--;
			r++;
		} 
		countCol++;			
	}
	
	int countRow = 1;
	
	for( int i = 0; i < row - 1; i++) {
		int r = countRow;
	    int c = col -1;
		while( r <= row - 1) {
			cout << *(*(p + r)+c) <<endl;
			r++;
			c--;
		}
		countRow++;
	}
	
}
