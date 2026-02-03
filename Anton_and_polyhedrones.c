#include<stdio.h>
int main()
{
    int a=0,i,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        char si[13];
        scanf("%s",si);
        if(si[0]=='T')
        {
            a+=4;
        }
        if(si[0]=='C')
        {
            a+=6;
        }
        if(si[0]=='O')
        {
            a+=8;
        }
        if(si[0]=='D')
        {
            a+=12;
        }
        if(si[0]=='I')
        {
            a+=20;
        }
    }
    printf("%d",a);
    return 0;
}
