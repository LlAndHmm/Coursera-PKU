#include<iostream>
#include<string.h>
	using namespace std;
	void match(char str1[],char str2[]) {
		int i;
		for(i = 0; i < strlen(str1); i++) {
			if( str1[i] == '(' ) {
				str2[i] = '$';
			} else if( str1[i] == ')' ) {
				str2[i] = '?';
				if( i == 0) continue;
				int temp;
				for(temp = i - 1;i > 0; --temp ) {
					if(temp == 0) break;
					if(str1[temp] == '(') {
						str2[i] = ' ';
						str2[temp] = ' ';
						break;
					} else if(str1[temp] == ')')
						continue;
					else {
						str2[temp] = ' ';
					}
				} 
			} 
			else {
				str2[i] = ' '; 
			}
			
		}
	}
	int main(){
		char str1[100],str2[100]; 		//str1是输入的数组，str2是输出的数组 
		cin.getline(str1,100);
		match(str1,str2);
		cout<<str1<<endl;
		cout<<str2<<endl;
	}
