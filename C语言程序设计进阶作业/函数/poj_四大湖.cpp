#include<iostream>
#include<string.h>                              //Ԥ��������  
using namespace std;   
int main()                                          //������  
{                                               //��������ʼ  
    int Dt,Hz,Py,Th,sum[4]={0};     //�������  
    char lake[5][10];  
//Dt��ʾ��ͥ����Hz��ʾ�������Py��ʾ۶������Th��ʾ̫��  
//����Ĵ�����������п��ܣ���1��2��3��4�ֱ�����ʾ���ǵĴ�С��ϵ  
//1���4��С  
    for(Dt=1; Dt<=4; Dt++)  
    {  
        for(Hz=1; Hz<=4; Hz++)  
        {  
            if(Dt==Hz) continue;//�������������ͬ  
            for(Py=1; Py<=4; Py++)  
            {  
                if(Py==Hz || Py==Dt) continue;//�������������ͬ  
                    Th=10-Dt-Hz-Py;//����̫��������  
      
                sum[0]= (1==Dt) + (4==Hz) + (3==Py);//A˵�Ļ�  
                sum[1]= (1==Hz) + (4==Dt) + (2==Py) + (3==Th);//B˵�Ļ�  
                sum[2]= (4==Hz) + (3==Dt);//C˵�Ļ�  
                sum[3]= (1==Py) + (4==Th) + (2==Hz) + (3==Dt);//D˵�Ļ�  
                  
                if(sum[0]==1 && sum[1]==1 && sum[2]==1 && sum[3]==1)  
                {  
                    strcpy (lake[Dt], "��ͥ��");//��������ֵ  
                    strcpy (lake[Hz], "�����");  
                    strcpy (lake[Py], "۶����");  
                    strcpy (lake[Th], "̫��");  
                }  
  
            }  
        }  
    }  
    for(int i=1;i<=4;i++)  
    {  
        cout<<lake[i]<<endl;//�Ӵ�С���  
    }  
    return 0;//����������  
}  
