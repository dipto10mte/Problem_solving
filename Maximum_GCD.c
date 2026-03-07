#include<stdio.h>
int main()
{
    int i,n,t;
    scanf("%d",&t);
    int a[t];
    for(i=0;i<t;i++){
        scanf("%d",&a[i]);
        a[i]=a[i]/2;
    }
    for(i=0;i<t;i++)
        printf("%d\n",a[i]);
    return 0;
}
