#include<stdio.h>
	void sort(int a[],int n) {
		int ret = 0;
		for( int i = 0; i < n; i++ ) {
			if( a[i] == 1 && a[i + 1] == 0) {
				printf( "%d %d\n", i, i+1 );
				ret++;
			} 
		}
		return sort(a, n - 2 * ret);
	}
	int main() {
		int n;			//小朋友的个数
		int a[1000];		//最多一百个小朋友
		scanf("%d", &n);	
		for( int i = 0; i < n; i++ )
		scanf("%d",&a[i]);		//用1代表男，用0代表女 
		sort(a,n);
		return 0;	
	} 
