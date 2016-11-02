#include<iostream>
#include<string.h>

	using namespace std;
	
	int main() {
		int py,dt,th,hz, sum[4]={0};
		char lake[5][20];
		//dt表示洞庭湖， py表示鄱阳湖， th代表太湖， hz代表洪泽湖
		//用1234代表大小，1最大，4最小 
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
					//每人仅答对一条 
					sum[0]= (1==dt) + (4==hz) + (3==py);//A说的话  
                	sum[1]= (1==hz) + (4==dt) + (2==py) + (3==th);//B说的话  
               	 	sum[2]= (4==hz) + (3==dt);//C说的话  
                	sum[3]= (1==py) + (4==th) + (2==hz) + (3==dt);//D说的话  
					if( sum[0]==1 && sum[1]==1 && sum[2]==1 && sum[3]==1 ) {
						cout<<py<<endl<<dt<<endl<<th<<endl<<hz<<endl;
					}
				}	
			}
		}  
		return 0;
	}
