#include<iostream>
#include<stdio.h>
using namespace std;
class student {
		private:
  			int age,g1,g2,g3,g4;
  			int average;
 			char name[100], a, id[100];
		public :
  			void input() {
    			cin.getline(name, 100, ',');
    			cin>> age;
    			a = getchar();
    			cin.getline(id, 100, ',');
    			cin >> g1 >> a >> g2 >> a >> g3 >> a >> g4;
  			}
  			void ave() {
    			average = ((g1 + g2 + g3 + g4) / 4);
  			}
  			void output() {
    			cout << name << "," <<  age << "," << id << "," << average << endl;
		    }
	}A;
int main() {
	
	A.input();
	A.ave();
	A.output();
	
} 
