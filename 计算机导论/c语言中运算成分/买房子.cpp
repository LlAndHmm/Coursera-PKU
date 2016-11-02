#include<iostream>
using namespace std;
int main() {
	int N;
	double K;
	while (cin >> N >> K) {
		int year = 1;
		double price = 200.0;
		for (; year <= 20; year++) {
			double pay = N * year;
			if(pay >= price) {
				cout << year << endl;
				break;
			} else {
				price = double(price * (1 + double(K / 100.0)));
			}
		}
		if (year == 21) {
			cout << "Impossible" << endl;
		}
	}
}
