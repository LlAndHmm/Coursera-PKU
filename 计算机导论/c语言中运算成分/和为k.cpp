#include<iostream>
using namespace std;
int main() {
	int n, k;
	cin >> n >> k;
	
	int num[n];
	for (int i = 0; i < n; i++) {
		cin >> num[i];
	}
	
	int ret = 0;
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (num[i] + num[j] == k) {
				ret = 1;
			}
		}
	}
	if (ret == 1) {
		cout << "yes" << endl; 
	} else {
		cout << "no" << endl;
	}
} 

