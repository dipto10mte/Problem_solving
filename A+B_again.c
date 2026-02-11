#include<stdio.h>
int main()
{
    int i,m,n,t;
    scanf("%d",&t);
    int x[t];
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
        m=n%10;
        n=n/10;
        x[i]=m+n;
    }
    for(i=0;i<t;i++)
        printf("%d\n",x[i]);
    return 0;
}

