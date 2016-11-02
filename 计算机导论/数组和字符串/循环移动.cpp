#include<iostream>
using namespace std;
int main() {
	int n, m;
	cin >> n >> m;
	int num[100] ={0};
	
	for (int i = 0; i < n; i++) {
		cin >> num[i]; 
	} 
	
	int *p = num;
	for (int i = 0; i < n; i++) {
		*(p + n - 1 - i + m) = *(p + n - 1 - i);
	}
	for (int i = 0; i < m; i++) {
		*(p + i) = *(p + n + i);
	}
	for (int i = 0; i < n; i++) {
		cout << num[i] << " ";
	}
}
