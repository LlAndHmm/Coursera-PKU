#include<iostream> 
using namespace std;
int main() {
	int n, x, y, result;		//最开始有n个苹果，虫子x小时吃一个苹果，y小时后还剩几个
	cin>>n>>x>>y;
	if(y % x == 0) {
		result = n - y / x;
	} else {
		result = n - y / x - 1;
	}
	if( result < 0)
	result = 0; 
	cout<<result;
}
