#include<iostream>
#include"math.h"
using namespace std;
int main() {
	int i, res, num[6];
	int a = 0, b = pow(2, 32) / 2 - 1;
	for( i = 0; i < 6; i++)
	cin>>num[i];
	for( i = 0; i < 6; i++) {
		if(num[i] % 2 == 0) {
			if(num[i] < b)
				b = num[i];
		}
		else {
			if(num[i] > a)
				a = num[i];
		}
	}
	res = a - b;
	if(res < 0)
	cout<<-res<<endl;
	else
	cout<<res<<endl;
} 
