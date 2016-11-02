#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    char X, temp;
    int end = 0, num = 0;
    char a[55];
    scanf("%c", &X);
    a[0] = 0;
    while (scanf("%c", &temp) != EOF)
    {
        if (temp == X)
        {
            end++;
            num++;
            a[end] = num;
        }
        else
        {
            num++;
            printf("%d %d\n", a[end], num);
            end--;
            if (end < 0) return 0;
        }
    }
    return 0;
}
