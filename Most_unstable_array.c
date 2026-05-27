#include<stdio.h>
int main()
{
    int i,m,n,t;
    scanf("%d",&t);
    int a[t];
    for(i=0;i<t;i++){
        scanf("%d %d",&n,&m);
        if(n==1)
            a[i]=0;
        else if(n==2)
            a[i]=m;
        else
            a[i]=2*m;
    }
    for(i=0;i<t;i++)
        printf("%d\n",a[i]);
    return 0;
}
