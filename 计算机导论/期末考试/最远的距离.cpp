#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;

struct point {
	double x;
	double y;
}p[100];

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> p[i].x >> p[i].y;
	}
	
	double dis[200];
	int k = 0;
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			dis[k] = (double)sqrt (double((p[i].x - p[j].x) * (p[i].x - p[j].x)) + (double)((p[i].y - p[j].y) * (p[i].y - p[j].y)));
			k++;
		}
	}
	
	double Max = 0;
	for (int i = 0; i < k; i++) {
		if (dis[i] > Max) {
			Max = dis[i];
		}
	}
	cout << fixed << setprecision(4) << Max << endl;
	

}
