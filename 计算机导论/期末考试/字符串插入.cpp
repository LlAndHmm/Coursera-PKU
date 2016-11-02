#include<iostream>
#include<string.h>
using namespace std;
int main() {
	char str[11], substr[4];
	while (cin >> str, cin >> substr) {
		//找到ascii码最大值
		int Max = 0;
		for (int i = 0; str[i] != '\0'; i++) {
			if (str[i] > Max) {
				Max = str[i];
			}
		}
		//找到插入下标
		int index = 0;
		for (int i = 0; str[i] != '\0'; i++) {
			if (str[i] == Max) {
				index = i;
				break;
			}
		}
		//插入
		for (int i = strlen(str); i > index; i--) {
			str[i + 3] = str[i];
		} 
		for (int i = 0; i < 3; i++) {
			str[index + 1 + i] = substr[i];
		}
		cout << str << endl;
	} 
}
