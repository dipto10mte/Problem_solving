#include<stdio.h>
int main()
{
    int i,a[10001],x,y,z,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&x,&y);
        if(x%y==0)
        {
            a[i]=0;
        }
        else
        {
        z=x/y;
        a[i]=y-(x-z*y);
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
    return 0;
}

