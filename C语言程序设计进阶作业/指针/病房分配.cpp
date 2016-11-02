#include<iostream>
#include<stdio.h>
using namespace std;

struct document {
	int id;
	float level;
};

int main( ) {
	int m; 
	float a;
	cin >> m >> a;			//m为病人数目，安排住入重症病房的最低严重值a 

	
	struct document people[m];
	struct document *p = people;
	for( int i = 0; i < m; i++ ){
		cin >> p -> id >> p -> level;
		p++;
	}
		
		
	int index[m];			//存储符合重症病人下标  
	int countYes = 0, countNo = 0;
	for(int i = 0; i < m; i++) {
		if( people[i].level >= a ) {
			index[countYes++] = i;
		} else {
			countNo++;
		} 
	}
	
	if( countNo == m ) {
		cout << "None" << endl;
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
		
		printf("%03d %.1f\n", people[index[i]].id, people[index[i]].level);
	
	}
	return 0;
}
