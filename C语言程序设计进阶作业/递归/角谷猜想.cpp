#include<stdio.h>
	int fac(int a) {
		while( a != 1) {
			if( a % 2 == 0) {
				printf("%d/2=%d\n", a, a / 2 );
				a = a / 2;
			}
			else {
				printf("%d*3+1=%d\n", a, a * 3 + 1);
				a = a * 3 + 1;
			}
		}
		printf("End\n");
	}
 	int main() {
		int a;
 		scanf("%d", &a);
 		fac(a);
 		return 0;
	 } 
