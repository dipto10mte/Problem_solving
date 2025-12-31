#include<stdio.h>
int main()
{
    int n,k,l,i,b=0;
    scanf("%d %d",&n,&k);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    l=a[k-1];
    for(i=0;i<n;i++)
    {
        if(a[i]>=l&&a[i]>0)
        {
            b++;
        }
    }
    printf("%d",b);
    return 0;
}
