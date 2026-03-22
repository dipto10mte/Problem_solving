#include<stdio.h>
int main()
{
    int i,n,t;
    scanf("%d",&t);
    int a[t];
    for(i=0;i<t;i++){
        scanf("%d",&n);
        if(n==3)
            a[i]=3;
        else
            a[i]=2;
    }
    for(i=0;i<t;i++)
        printf("%d\n",a[i]);
    return 0;
}
