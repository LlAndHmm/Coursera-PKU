#include<iostream>
#include<string.h>

	using namespace std;
	
	int main() {
		int py,dt,th,hz, sum[4]={0};
		char lake[5][20];
		//dt��ʾ��ͥ���� py��ʾ۶������ th����̫���� hz��������
		//��1234�����С��1���4��С 
		for( dt = 1; dt <= 4; dt++) {
			for( py = 1; dt <= 4; dt++) {
				if( dt == py ) {
					continue;
				} 
				for( th = 1; th <= 4; th++) {
					if ( th == dt || th == py) {
						continue;
					}
					hz = 10 - dt - py - th;
					//ÿ�˽����һ�� 
					sum[0]= (1==dt) + (4==hz) + (3==py);//A˵�Ļ�  
                	sum[1]= (1==hz) + (4==dt) + (2==py) + (3==th);//B˵�Ļ�  
               	 	sum[2]= (4==hz) + (3==dt);//C˵�Ļ�  
                	sum[3]= (1==py) + (4==th) + (2==hz) + (3==dt);//D˵�Ļ�  
					if( sum[0]==1 && sum[1]==1 && sum[2]==1 && sum[3]==1 ) {
						cout<<py<<endl<<dt<<endl<<th<<endl<<hz<<endl;
					}
				}	
			}
		}  
		return 0;
	}
