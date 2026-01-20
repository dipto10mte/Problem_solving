#include<stdio.h>
int main()
{
    int k,w,n,i,x=0;
    scanf("%d %d %d",&k,&n,&w);
    for(i=0;i<w;i++)
    {
        x=x+k+k*i;
    }
    if(x-n>0)
    {
        printf("%d",x-n);
    }
    else
    {
        printf("0");
    }
    return 0;
}
