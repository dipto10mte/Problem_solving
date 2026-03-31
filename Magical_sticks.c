#include<stdio.h>
int main()
{
    int i,n,t;
    scanf("%d",&t);
    int a[t];
    for(i=0;i<t;i++){
        scanf("%d",&n);
        if(n%2==1)
            a[i]=(n+1)/2;
        else
            a[i]=n/2;
    }
    for(i=0;i<t;i++)
        printf("%d\n",a[i]);
    return 0;
}
