#include<iostream>
#include<stdio.h>
#include<string.h>

int main() 
{
    int i = 0, j , k;
    char s[501], temp;
    gets(s);
    while(s[i])					//��������һ���ַ� 
    {
        while (s[i] == ' ') i++;					//��ѭ�� �����������ǿո�һ�����������������Ԫ�أ�i++ 
        if(!s[i]) break;						//�������ѭ������'\0'������ 
        j = i;
        while(s[j] != ' '&&s[j]) j++;			// ��ѭ�� 
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
