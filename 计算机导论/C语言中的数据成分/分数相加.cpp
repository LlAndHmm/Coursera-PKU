#include<iostream>
using namespace std;

int main() {
	int up, down;
	int resultUp = 0, resultDown = 1;
	int n;
	cin >> n;
	while(n--) {
		char clash;
		cin >> up >> clash >> down;
		resultUp = resultUp * down + resultDown * up;
		resultDown = resultDown * down;
	}
	//Ô¼·Ö
	int a = resultDown, b = resultUp, temp;
	while( b != 0) {
		temp = b;
		b = a % b;
		a = temp; 
	}
	int gcd = a;
	resultDown = resultDown / gcd;
	resultUp = resultUp / gcd;
	
	if(resultDown > 1)
		cout << resultUp << '/' << resultDown << endl;
	else
		cout << resultUp << endl;
		
	return 0; 
}
