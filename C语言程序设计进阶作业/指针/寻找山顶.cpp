#include<iostream>
using namespace std;
int main() {
	int m, n;		//5 <= m <= 20, 5 <= n <= 20, 分别代表行和列
	int height[21] [21] = {0};
	cin >> m >> n;
	for( int i = 1; i < m + 1; i++ ) {
		for ( int j = 1; j < n + 1; j++) {
			cin >> height[i] [j];
		}
	} 
    for( int i = 1; i < m + 1; i++) {
		for( int j = 1; j < n + 1; j++) {
			if( height[i] [j] >= height[i - 1] [j] && height[i] [j] >= height[i + 1] [j] && height[i] [j] >= height[i] [j - 1] && height[i] [j] >= height[i] [j + 1]) {
				cout << i - 1 << " " << j - 1 << endl;
			}
		}
	}
	return 0;
}
