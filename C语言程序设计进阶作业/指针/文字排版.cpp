#include<iostream>
using namespace std;

void typeset( char (*p) [45], int vacLength[], int n ) {
	for( int j = 0; j < vacLength[0]; j++ )
		cout << *(*(p) + j);
	int length = vacLength[0];
	for( int i = 1; i < n; i++) {
		if(length + 1 + vacLength[i] <= 80) {
			length = length + 1 + vacLength[i];
			cout << ' ';
			for(int j = 0; j < vacLength[i]; j++) {
				cout << *(*(p + i) + j);
			}
		} else {
			cout << endl;
			length = vacLength[i];
			for(int j = 0; j < vacLength[i]; j++) {
				cout << *(*(p + i) + j);
			}
		}
	}
}	

int main() {
	char vac[1000] [45];
	int vacLength[1000];
	int n;			//n为单词数目
	cin >> n;
	cin.get();
	for( int i = 0; i < n; i++ ) {
		char temp;
		for( int j = 0; j < 45; j++ ) {
			cin.get(temp);
			if( temp != ' ' && temp != '\n') {
				vac[i] [j] = temp;
			} 
			else
			{
				vacLength[i] = j;
				break;
			}
		}
	}
	typeset(vac, vacLength, n);
	
}
