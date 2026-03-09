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

    }
    for(i=0;i<t;i++)
        printf("%d\n",x[i]);
    return 0;
}
