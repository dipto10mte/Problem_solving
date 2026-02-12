#include<stdio.h>
int main()
{
    int i,j,n,x=0,y=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    j=n-1;
    for(i=0;i<(n+1)/2;i++,j--)
    {
        if(i==j)
        {
            x+=a[i];
            break;
        }
        if(a[i]>a[j])
        {
            x+=a[i];
            if(a[i+1])
        }
        else
        {
            x+=a[j];
            y+=a[i];
        }

    }
    printf("%d %d",x,y);
    return 0;
}
