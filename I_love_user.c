#include<stdio.h>
int main()
{
    int i,m=0,n,x,y,a[1001];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    x=y=a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]>x)
        {
            x=a[i];
            m++;
        }
        else if(a[i]<y)
        {
            y=a[i];
            m++;
        }
    }
    printf("%d",m);
    return 0;
}
