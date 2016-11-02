#include<iostream>
using namespace std;
typedef struct {
	int x;
	int y;
	int flag;
}point;
int main() {
	int n;
	cin >> n;
	
	point p[100];
	for (int i = 0; i < n; i++) {
		cin >> p[i].x >> p[i].y;
		p[i].flag = 1;
	}
	 if (n == 1) {
	 	cout << "(" << p[0].x << "," << p[0].y << ")";
	 	return 0;
	 } 
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i == j) continue;
			if (p[j].x >= p[i].x && p[j].y >= p[i].y) {
				p[i].flag = 0;
				break;
			}
		}
	}
	 
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (p[i].flag == 1 && p[j].flag == 1 && p[j].x < p[i].x) {
				int tempX = p[i].x;
				p[i].x = p[j].x;
				p[j].x = tempX;
				int tempY = p[i].y;
				p[i].y = p[j].y;
				p[j].y = tempY;	
			}
		}
	}
	int temp;
	for (int i = 0; i < n; i++) {
		 if (p[i].flag == 1) {
			cout << "(" << p[i].x << "," << p[i].y << ")";
			temp = i;
			break;	
		} 
	}
	for (int i = temp + 1; i < n; i++) {
		 if (p[i].flag == 1) {
			cout << ",(" << p[i].x << "," << p[i].y << ")";	
		} 
	}
	return 0;
}
