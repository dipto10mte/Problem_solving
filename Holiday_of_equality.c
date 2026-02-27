#include<stdio.h>
int main()
{
    int a[100],b=0,i,m=0,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]>m)
            m=a[i];
    }
    for(i=0;i<n;i++)
        b=b+m-a[i];
    printf("%d",b);
    return 0;
}
