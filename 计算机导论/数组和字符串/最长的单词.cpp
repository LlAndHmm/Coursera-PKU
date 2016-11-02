#include<iostream>
#include<string.h>
using namespace std;

struct word {
	int length;
	int head;
}word[100];

int main() {
	char s[501];
	cin.get(s,501,'\n');
	//记录每个单词长度 
	int start = 0;
	int count = 0;
	for (int i = start; s[i] != '\0';i = word[count - 1].head + word[count - 1].length + 1) {
		word[count].head = start;
		for (int j = start; (s[j] <= 122 && s[j] >= 97) || (s[j] <= 90 && s[j] >= 65); j++) {
			word[count].length++;
		}
		start = start +  word[count].length + 1;
		count++;
	}
	//找出最长单词长度 
	int Max = 0;
	for (int i = 0; i < count; i++) {
		if (word[i].length > Max) {
			Max = word[i].length;
		}
	}
	//输出最长单词 
	for (int i = 0; i < count; i++) {
		if (word[i].length == Max) {
			for (int j = word[i].head; j < word[i].head + word[i].length; j++) {
				cout << s[j];
			}
			break;
		}
	}
	return 0;
}
