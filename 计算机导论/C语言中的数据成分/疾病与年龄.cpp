#include<iostream>
#include<iomanip> 
using namespace std;
int main() {
	int n;
	cin >> n;
	int age[n];
	for( int i = 0; i < n; i++ )
		cin >> age[i];
	
	int countA = 0, countB = 0, countC = 0, countD = 0;
	for( int i = 0; i < n; i++ ) {
		if( age[i] <= 18 && age[i] >= 1)
			countA++;
		else if(age[i] <= 35 && age[i] >= 19)
			countB++;
		else if(age[i] <= 60 && age[i] >= 36)
			countC++;
		else if(age[i] > 60)
			countD++;
		else continue;
	} 
	cout << "1-18: " << fixed << setprecision(2) << (double)(countA *  100.0 / n) << "%" << endl;
	cout << "19-35: " << fixed << setprecision(2) << (double)(countB *  100.0 / n) << "%" << endl;
	cout << "36-60: " << fixed << setprecision(2) << (double)(countC *  100.0 / n) << "%" << endl;
	cout << "60-: " << fixed << setprecision(2) << (double)(countD *  100.0 / n) << "%" << endl;
}
