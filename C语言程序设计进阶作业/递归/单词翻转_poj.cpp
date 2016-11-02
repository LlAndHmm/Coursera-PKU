#include<iostream>
#include<stdio.h>
#include<string.h>

int main() 
{
    int i = 0, j , k;
    char s[501], temp;
    gets(s);
    while(s[i])					//至少输入一个字符 
    {
        while (s[i] == ' ') i++;					//外循环 ，如果输进来是空格（一个或多个），跳开这个元素，i++ 
        if(!s[i]) break;						//如果到了循环到了'\0'，跳出 
        j = i;
        while(s[j] != ' '&&s[j]) j++;			// 内循环 
        for (k = i; k < (i + j) / 2; k++)
        {
            temp = s[k];
            s[k] = s[j-1+i-k];
            s[j-1+i-k] = temp;    
        }
        i = j;
    }
    printf("%s\n",s);
    return 0;
}
