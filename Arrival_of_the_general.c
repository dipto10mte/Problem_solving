#include<stdio.h>
int main()
{
    int i,n,x=0,y=0,a[101];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int max=a[0],min=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
            x=i;
        }
    }
    for(i=0;i<n;i++)
    {
        if(a[i]<=min)
        {
            min=a[i];
            y=i;
        }
    }
    if(x>y)
    {
        printf("%d",x+n-y-2);
    }
    else
    {
        printf("%d",x+n-y-1);
    }
    return 0;
}
