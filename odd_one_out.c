#include<stdio.h>
int main()
{
    int a,b,c,i,t;
    scanf("%d",&t);
    int x[t];
    for(i=0;i<t;i++)
    {
        scanf("%d %d %d",&a,&b,&c);
        if(a==b)
            x[i]=c;
        else if(a==c)
            x[i]=b;
        else
            x[i]=a;
    }
    for(i=0;i<t;i++)
    {
        printf("%d\n",x[i]);
    }
    return 0;
}
