#include<iostream> 
using namespace std;
int main() {
	char s[81];
	int count[5] = {0};
	cin.getline(s, 80);
	
	for (int i = 0; s[i] != '\0'; i++) {
		switch(s[i]) {
			case 'a' : count[0]++; break;
			case 'e' : count[1]++; break;
			case 'i' : count[2]++; break;
			case 'o' : count[3]++; break;
			case 'u' : count[4]++; break;
		}
	}
	
	for (int i = 0; i < 5; i++) {
		cout << count[i] << " "; 
	}
	
	return 0;
}
