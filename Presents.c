#include<stdio.h>
int main()
{
    int i,n,a[101],x,b[101];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&x);
        b[x-1]=i+1;
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",b[i]);
    }
    return 0;
}
