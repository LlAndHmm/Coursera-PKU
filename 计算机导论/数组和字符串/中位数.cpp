#include<iostream>
using namespace std;
int main() {
	int num[15000];
	int N;
	cin >> N;
	while(N != 0) {
		for (int i = 0; i < N; i++) {
			cin >> num[i];
		}
		for (int i = 0; i < N - 1; i++) {
			for (int j = 1; j < N - i; j++) {
				if (num[j - 1] > num[j]) {
					int temp = num[j - 1];
					num[j - 1] = num[j];
					num[j] = temp;
				}
			}
		}
		if (N % 2 == 0) {
			cout << (num[N / 2] + num[N / 2 - 1]) / 2 << endl;
		} else {
			cout << num[N / 2] << endl;
		}
		cin >> N;
	}
	return 0;
}
