#include<stdio.h>
int main()
{
    int i,j,n,m=0,a[101],b[101];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&a[i],&b[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i]==b[j])
            {
                m++;
            }
        }
    }
    printf("%d",m);
    return 0;
}
