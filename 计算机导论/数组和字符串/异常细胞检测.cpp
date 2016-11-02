#include<iostream>
using namespace std;
int main() {
	int a[100] [100];
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> a[i] [j];
		}
	}
	
	int count = 0;
	for (int i = 1; i < N; i++) {
		for (int j = 1; j < N; j++) {
			if ((a[i + 1] [j] - a[i] [j] >= 50)
			&& (a[i - 1] [j] - a[i] [j] >= 50) 
			&& (a[i] [j + 1] - a[i] [j] >= 50) 
			&& (a[i] [j - 1] - a[i] [j] >= 50))
			{
				count++;
			}
		}
	}
	cout << count << endl;
} 
