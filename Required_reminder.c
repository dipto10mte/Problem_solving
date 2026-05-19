#include<stdio.h>
int main()
{
    long long m,n,x,y;
    int i,t;
    scanf("%d",&t);
    int a[t];
    for(i=0;i<t;i++){
        scanf("%lld %lld %lld",&x,&y,&n);
        m=n/x;
        a[i]=m*x+y;
        if(a[i]>n)
            a[i]-=x;
    }
    for(i=0;i<t;i++)
        printf("%d\n",a[i]);
    return 0;
}
