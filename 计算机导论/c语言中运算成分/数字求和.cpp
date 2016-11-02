#include<iostream>
using namespace std;
int main() {
	int a;
	cin >> a;
	
	int num[5];
	for (int i = 0; i < 5; i++)	{
		cin >> num[i];
	}
	
	int sum = 0;
	for (int i = 0; i < 5; i++) {
		if (num[i] < a) {
			sum = sum + num[i];
		}
	} 
	cout << sum << endl;
}
