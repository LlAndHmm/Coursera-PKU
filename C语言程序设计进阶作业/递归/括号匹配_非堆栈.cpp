#include<stdio.h> 
int main()
{
    int i,j,y[101],k;
    char x[101];
    while(scanf("%s",x)!=EOF)
    {
        for(i=0,j=0;x[i]!='\0';i++) //����y��ֵ��
        {
            if(x[i]==40)
            {
                y[j]=0;
                j++;
            }
            if(x[i]==41)
            {
                y[j]=1;
                j++;
            }
        }
        for(i=j-1;i>=0;i--) //�Ų�ƥ������ţ�
        {
            if(y[i]==0)
            {
                for(k=i+1;k< 
                {
                    if(y[k]==1)
                    {
                        y[i]=2;
                        y[k]=2;
                        break; //�ҵ��ǵ�break��
                    }
                }
            }
        }
        puts(x);
        for(i=0,j=0;x[i]!='\0';i++) //�����ƥ�����ţ�
        {
            if(x[i]==41||x[i]==40)
            {
                if(y[j]==1) {printf("?");j++;} //�ǵ�j++����ͬ��
                else if(y[j]==0){ printf("$");j++;}
                else {j++;printf(" ");} 
            }
            else printf(" ");
        }
        printf("\n");
    }
    return 0;
}
