#include<stdio.h>
int main()
{
    int i,n,t,x;
    scanf("%d",&t);
    int a[t];
    for(i=0;i<t;i++){
        scanf("%d %d",&x,&n);
        if(n%2==0)
            a[i]=0;
        else
            a[i]=x;
    }
    for(i=0;i<t;i++)
        printf("%d\n",a[i]);
    return 0;
}
