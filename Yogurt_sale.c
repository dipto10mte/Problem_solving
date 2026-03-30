#include<stdio.h>
int main()
{
    int a,b,i,n,t;
    scanf("%d",&t);
    int x[t];
    for(i=0;i<t;i++){
        scanf("%d %d %d",&n,&a,&b);
        if(n==1)
            x[i]=a;
        else if(b<2*a)
            x[i]=b+a*(n-2);
        else
            x[i]=a*n;
    }
    for(i=0;i<t;i++)
        printf("%d\n",x[i]);
    return 0;
}
