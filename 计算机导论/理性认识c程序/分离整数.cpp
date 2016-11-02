#include<iostream> 
#include<stack> 
using namespace std;
int main() {
	int n;
	cin>>n;
	stack<int> N;
	while(n % 10 > 0) {
		N.push( n % 10);
		n = n / 10;
	}
	while(!N.empty()){
		cout<<N.top()<<endl;
		N.pop();
	}
	
}
