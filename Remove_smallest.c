#include<stdio.h>
int main()
{
    int i,j=0,k,l,t,n;
    scanf("%d",&t);
    int a[t];
    for(i=0;i<t;i++)
    {
        a[i]=1;
        scanf("%d",&n);
        int b[n];
        for(j=0;j<n;j++)
            scanf("%d",&b[j]);
        if(n==1)
            continue;
        else
        {
            for(j=0;j<n;j++)
            {
                for(k=j+1;k<n;k++)
                {
                    if(b[j]>b[k])
                    {
                        l=b[j];
                        b[j]=b[k];
                        b[k]=l;
                    }
                }
            }
            for(j=1;j<n;j++){
                if(b[j]-b[j-1]>1)
                    a[i]=0;
            }
        }
    }
    for(i=0;i<t;i++)
    {
        if(a[i]==1)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
