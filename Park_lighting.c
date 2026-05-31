#include<stdio.h>
int main()
{
    int i,m,n,t;
    scanf("%d",&t);
    int a[t];
    for(i=0;i<t;i++){
        scanf("%d %d",&n,&m);
        if(n%2==0||m%2==0)
            a[i]=(m*n)/2;
        else
            a[i]=(m*n+1)/2;
    }
    for(i=0;i<t;i++)
        printf("%d\n",a[i]);
    return 0;
}
