#include<iostream>
using namespace std;
int main() {
	int a, b, c;		//c == a ? b
	cin >> a;
	cin.get();
	cin >> b;
	cin.get();
	cin >> c;
	if( a / b == c)
		cout << "/" << endl;
	else if( a * b == c)
	 	cout << "*" << endl;
	else if( a - b == c)
	 	cout << "-" << endl;
	else if( a + b == c)
	 	cout << "+" << endl;
	else if( a % b == c)
	 	cout << "%" << endl;
	else
		cout << "error" << endl;
	return 0;	
}
