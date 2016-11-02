#include<iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	
	while(n--) {
		char chain[256];
		char *p = chain;
		cin >> chain;
		while( *p != '\0') {
		if( *p == 'A' )
			cout << "T";
		else if( *p == 'T' )
			cout << "A";
		else if( *p == 'C')
			cout << "G";
		else 
			cout << "C"; 
		p++;
	}
		cout << endl;
}
	
}
