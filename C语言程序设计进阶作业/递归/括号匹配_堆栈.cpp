#include<stdio.h>   
#include<iostream>   
#include<stack>   
#include<string.h>   
using namespace std;  
  
int main(){  
    int i;  
    char str[101],Mark[101];  
    while(scanf("%s",str) != EOF){  
        stack<char> S;  
        for(i = 0;i < strlen(str);i++){  
            //�����'('����ջ   
            if(str[i] == '('){  
                //�������±��ݴ���ջ��   
                S.push(i);  
                //��Ӧ����ַ�������Ϊ' '   
                Mark[i] = ' ';  
            }  
            else if(str[i] == ')'){  
                //���û��'('��ƥ��   
                if(S.empty()){  
                    //��Ӧ����ַ�����Ϊ'?'   
                    Mark[i] = '?';  
                }  
                //��'('��ƥ��   
                else{  
                    //��Ӧ����ַ�����Ϊ' '   
                    Mark[i] = ' ';  
                    //ջ��λ������������ƥ�䣬�����Ѿ�ƥ���������   
                    S.pop();  
                }  
            }  
            //�����ַ�������,�������޹�   
            else{  
                Mark[i] = ' ';   
            }  
        }//for   
        //��ջ�ǿգ�����û��ƥ���������   
        while(!S.empty()){  
            //��Ӧ����ַ�����Ϊ'$'   
            Mark[S.top()] = '$';  
            S.pop();  
        }  
        Mark[i] = '\0';  
        //���   
        puts(str);  
        puts(Mark);  
    }  
    return 0;  
}  
