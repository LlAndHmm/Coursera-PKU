#include<iostream>
	using namespace std;
	int main(){
		int year, month, day;
		int maxdays[]={31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
		cout<<"today is yyyy-mm-dd"<<endl;
		cin>>year>>month>>day;
		
		if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0 )
			maxdays[1]=29;
		
		if(year < 1600 || year > 3000){
			cout<<"its a wrong date"<<endl;
			return 0;
		}
		
		if(month > 12 || month < 1){
			cout<<"its a wrong date"<<endl;
			return 0;
		}
		
		if(day > maxdays[month - 1]){
			cout<<"its a wrong date"<<endl;
			return 0;
		}
		day++;
		if(day > maxdays[month-1]){
			day = 1;
			month = month + 1;
			if(month > 12){
				year++;
				month = 1;
				day = 1;
			}
		}
		
		cout<<year<<"-"<<month<<"-"<<day;
		return 0;
	}
	
	
