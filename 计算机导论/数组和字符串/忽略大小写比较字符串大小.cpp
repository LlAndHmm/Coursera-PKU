#include<iostream>
using namespace std;
int main() {
	char s1[81], s2[81];
	cin.getline(s1, 80);
	cin.getline(s2, 80);
	
	int i = 0;
	while ((s1[i] != '\0') && (s2[i] != '\0')) {
		if (s1[i] > s2[i]) {
    		if (s1[i] <= 122 && s1[i] >= 97 && s2[i] <= 90 && s2[i] >= 65 && s1[i] - s2[i] == 32) {
    			i++;
			} else break;
		} else if (s1[i] < s2[i]) {
    		if (s2[i] <= 122 && s2[i] >= 97 && s1[i] <= 90 && s1[i] >= 65 && s2[i] - s1[i] == 32) {
    			i++;
			} else break;
		} else {
    		i++;
		}
	}
	
	if (s1[i] > s2[i]) {
		if (s1[i] - 32 > s2[i]) {
			cout << ">" << endl;
		} else {
			cout << "<" <<endl;
		}
	} else if (s1[i] < s2[i]) {
    	if (s2[i] - 32 > s1[i]) {
    		cout << "<" << endl;
		} else {
			cout << ">" << endl;
		}
	} else {
    	cout << "=" << endl;
	}
	
	return 0;
}
