#include<stdio.h>
int main()
{
    int i,n,x=0,z=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(x==0&&a[i]==-1)
        {
            z++;
        }
        else
        {
            x+=a[i];
        }
    }
    printf("%d",z);
    return 0;
}
