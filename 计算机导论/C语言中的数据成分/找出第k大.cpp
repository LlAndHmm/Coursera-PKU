#include<iostream>
using namespace std;
int main() {
	int N, K;
	cin >> N >> K;
	int a[N];
	for( int i = 0; i < N; i++ )
		cin >> a[i];
	
	for( int i = 0; i < N - 1; i++ ) {
		for( int j = 1; j < N - i; j++ ) {
			if( a[j - 1] < a[j]) {
				int temp = a[j - 1];
				a[j - 1] = a[j];
				a[j] = temp;
			}
		}
	}
	cout << a[K - 1] << endl;
}
