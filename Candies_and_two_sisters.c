#include<stdio.h>
int main()
{
    int i,n,a[10001],b[10001];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]==0||a[i]==1||a[i]==2)
        {
            b[i]=0;
        }
        else if(a[i]%2==0)
        {
            b[i]=a[i]/2-1;
        }
        else
        {
            b[i]=(a[i]-1)/2;
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d\n",b[i]);
    }
    return 0;
}
