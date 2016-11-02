#include<iostream> 
#define Pi 3.14159
using namespace std;
int main() {
	int h, r, v, result;
	cin>>h>>r;
	v = Pi * r * r * h;
	if ( 20000 % v == 0) {
		result = 20000 / v;
	} else {
		result = 20000 / v + 1;
	}
	cout<<result;
}
