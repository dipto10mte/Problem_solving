#include<stdio.h>
int main()
{
    int i,n,a[100001],b=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(i>0&&a[i]!=a[i-1])
        {
            b++;
        }
    }
    printf("%d",b+1);
    return 0;
}
