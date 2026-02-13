#include<stdio.h>
int main()
{
    int i,j,n,t;
    int b[101];
    scanf("%d",&t);
    int a[t];
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
        for(j=0;j<n;j++)
        {
            scanf("%d",&b[j]);
        }
        if(b[0]!=b[1]&&b[0]!=b[2])
        {
            a[i]=1;
        }
        else
        {
            j=0;
            for(j=0;j<n-1;j++)
            {
                if(b[j]!=b[j+1])
                {
                    break;
                }
            }
            a[i]=j+2;
        }
    }
    for(i=0;i<t;i++)
    {
        printf("%d\n",a[i]);
    }
    return 0;
}
