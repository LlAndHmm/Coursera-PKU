#include<iostream>
#include<iomanip>
using namespace std;

struct document {
	char id[3];
	float level;
};

int main( ) {
	int m; 
	float a;
	cin >> m >> a;			//m为病人数目，安排住入重症病房的最低严重值a 

	
	struct document people[50];
	struct document *p = people;
	for( int i = 0; i < m; i++ ){
		cin >> p -> id >> p -> level;
		p++;
	}
		
		
	int index[50];			//存储符合重症病人下标  
	int countYes = 0, countNo = 0;
	for(int i = 0; i < m; i++) {
		if( people[i].level >= a ) {
			index[countYes++] = i;
		} else {
			countNo++;
		} 
	}
	
	if( countNo == m ) {
		cout << "None." << endl;
	} else {
		for( int i = 0; i < countYes - 1; i++ ) {
			for( int j = 1; j < countYes - i; j++ ) {
				if( people[index[j]].level > people[index[j - 1]].level) {
					int temp = index[j - 1];
					index[j - 1] = index[j];
					index[j] = temp;
				}
			}
		}
	}
	for( int i = 0; i < countYes; i++) {	
		cout << people[index[i]].id << ' ';
		cout << fixed;
		cout << setprecision(1) << people[index[i]].level << endl;
	}
	return 0;
}
