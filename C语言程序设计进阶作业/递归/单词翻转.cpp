#include<stdio.h>
	int roll(char a[],int n) {
		int temp = 0;
	 	int i = n; 
		while( a[i] != ' ' && a[i]) {
			i++;
			temp = i;
		}
		for(i = temp - 1; i >= n; i--)
		printf("%c",a[i]);
		printf(" ");
		n = temp;
		if(a[n] == '\0')
		return 0; 
		roll(a,n+1);
	}
	int main() {
		char a[501];
		int n = 0;
		gets(a);
		if(a[0] != ' ')
		roll(a,n);
		return 0; 
	}
