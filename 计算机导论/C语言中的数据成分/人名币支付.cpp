#include<iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	if( n >= 100 ) {
		cout << n / 100 << endl;
		n = n % 100;	
	} else {
		cout << "0" << endl;
	}
	if( n >= 50 ) {
		cout << n / 50 << endl;
		n = n % 50;
	} else {
		cout << "0" << endl;
	}
	if( n >= 20) {
		cout << n / 20 << endl;
		n = n % 20;
	} else {
		cout << "0" << endl;
	}
	if( n >= 10 ) {
		cout << n / 10 << endl;
		n = n % 10;
	} else {
		cout << "0" << endl;
	}
	if( n >= 5) {
		cout << n / 5 << endl;
		n = n % 5;		
	} else {
		cout << "0" << endl;
	}
	if( n >= 1){
		cout << n / 1 << endl;
	} else {
		cout << "0" << endl;
	}
}
