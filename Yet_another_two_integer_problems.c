#include<stdio.h>
int main()
{
    int a,b,i,n,t;
    scanf("%d",&t);
    int x[t];
    for(i=0;i<t;i++)
    {
        n=0;
        scanf("%d %d",&a,&b);
        if(a==b)
        {
            x[i]=0;
        }
        else if(a>b)
        {
            x[i]=(a-b)/10;
            if(a%10!=b%10)
                x[i]++;
        }
        else
        {
            x[i]=(b-a)/10;
            if(a%10!=b%10)
                x[i]++;
        }
    }
    for(i=0;i<t;i++)
        printf("%d\n",x[i]);
    return 0;
}
