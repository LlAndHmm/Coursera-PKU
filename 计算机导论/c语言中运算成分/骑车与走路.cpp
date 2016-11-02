#include<iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	
	while (n != 0) {
		int dis;
		cin >> dis;
		if ((50 + dis / 3.0) < (dis / 1.2)) {
			cout << "Bike" << endl;
		} else if((50 + dis / 3.0) == (dis / 1.2)) {
			cout << "All" << endl;
		} else {
			cout << "Walk" << endl;
		}
		n--;
	}
	return 0;
} 
