#include<iostream>
using namespace std;

int GetM(int n) {
	int m, a, b;
	a = n % 10;
	b = (n / 10) % 10;
	m = a + b;
	return m;
}

int main() {
	int n;
	cin >> n;
	
	int i = 10;
	while (i <= n) {
		if ((i % GetM(i)) == 0) {
			cout << i << endl; 
		}
	
	 	i++;
	}
	return 0;
}
