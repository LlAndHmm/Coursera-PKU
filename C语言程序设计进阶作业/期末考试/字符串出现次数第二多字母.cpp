 #include<iostream>
using namespace std;
int main() {
	char str[501];
	int count[26] = {0};
	cin >> str;
	
	//统计每个字母出现次数 
	int i = 0;
	while (str[i] != '\0') { 
	
		if((str[i] >= 65) && (str[i] <= 90)) {
			count[str[i] - 65]++;
		}
		if((str[i] >= 97) && (str[i] <= 122)) {
			count[str[i] - 97]++;
		}
		
		i++;
	}
	
	//排序 
	int Max = 0; 
	//找出最大 
	for (int i = 0; i < 26; i++) {
		if (count[i] > Max) {
			Max = count[i];
		}
	}
	//找出第二多字母 
	int second = 0, index = 0;
	for (int i = 0; i < 26; i++) {
		if (count[i] == Max) {
			continue;
		} else if (count[i] > second) {
	 		second = count[i];
		}	
	} 
	//输出第二多字母
	for (int i = 0; str[i] != '\0'; i++) {
		if ((str[i] >= 65) && (str[i] <= 90)) {
			if (count[str[i] - 65] == second) {
				cout << (char)(str[i]) << "+" << (char)(str[i] + 32) << ":" << count[str[i] - 65] << endl;
				break;
			}
		} else if ((str[i] >= 97) && (str[i] <= 122)) {
			if (count[str[i] - 97] == second) {
				cout << (char)(str[i] - 32) << "+" << (char)(str[i]) << ":" << count[str[i] - 97] << endl;
				break;
			}
		} else continue;
		
	}
	return 0;
} 
