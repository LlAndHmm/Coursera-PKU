#include<iostream>
#include<string.h>                              //预编译命令  
using namespace std;   
int main()                                          //主函数  
{                                               //主函数开始  
    int Dt,Hz,Py,Th,sum[4]={0};     //定义变量  
    char lake[5][10];  
//Dt表示洞庭湖，Hz表示洪泽湖，Py表示鄱阳湖，Th表示太湖  
//穷举四大湖排名的所有可能，用1、2、3、4分别来表示它们的大小关系  
//1最大，4最小  
    for(Dt=1; Dt<=4; Dt++)  
    {  
        for(Hz=1; Hz<=4; Hz++)  
        {  
            if(Dt==Hz) continue;//湖的面积各不相同  
            for(Py=1; Py<=4; Py++)  
            {  
                if(Py==Hz || Py==Dt) continue;//湖的面积各不相同  
                    Th=10-Dt-Hz-Py;//计算太湖的排名  
      
                sum[0]= (1==Dt) + (4==Hz) + (3==Py);//A说的话  
                sum[1]= (1==Hz) + (4==Dt) + (2==Py) + (3==Th);//B说的话  
                sum[2]= (4==Hz) + (3==Dt);//C说的话  
                sum[3]= (1==Py) + (4==Th) + (2==Hz) + (3==Dt);//D说的话  
                  
                if(sum[0]==1 && sum[1]==1 && sum[2]==1 && sum[3]==1)  
                {  
                    strcpy (lake[Dt], "洞庭湖");//按排名赋值  
                    strcpy (lake[Hz], "洪泽湖");  
                    strcpy (lake[Py], "鄱阳湖");  
                    strcpy (lake[Th], "太湖");  
                }  
  
            }  
        }  
    }  
    for(int i=1;i<=4;i++)  
    {  
        cout<<lake[i]<<endl;//从大到小输出  
    }  
    return 0;//主函数结束  
}  
