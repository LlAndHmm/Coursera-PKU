#include<iostream>
using namespace std;
int main(){
	int n, p = 0, x[100];
	cin>>n;
	for(int i = 0; i < n; i++){
		cin>>x[i];
	}
	for(int i = 0; i < n; i++){
		if(x[i] == i){
			cout<<i<<endl;
			p=1;
			break;
		}
		else 
			continue ;
	}
	if(p==0){
		cout<<"N"<<endl;
	}
}
