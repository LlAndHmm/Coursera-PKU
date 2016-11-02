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
            //如果是'('则入栈   
            if(str[i] == '('){  
                //将数组下表暂存在栈中   
                S.push(i);  
                //对应输出字符串暂且为' '   
                Mark[i] = ' ';  
            }  
            else if(str[i] == ')'){  
                //如果没有'('相匹配   
                if(S.empty()){  
                    //对应输出字符串改为'?'   
                    Mark[i] = '?';  
                }  
                //有'('相匹配   
                else{  
                    //对应输出字符串改为' '   
                    Mark[i] = ' ';  
                    //栈顶位置左括号与其匹配，弹出已经匹配的左括号   
                    S.pop();  
                }  
            }  
            //其他字符需许考虑,与括号无关   
            else{  
                Mark[i] = ' ';   
            }  
        }//for   
        //若栈非空，则有没有匹配的左括号   
        while(!S.empty()){  
            //对应输出字符串改为'$'   
            Mark[S.top()] = '$';  
            S.pop();  
        }  
        Mark[i] = '\0';  
        //输出   
        puts(str);  
        puts(Mark);  
    }  
    return 0;  
}  
