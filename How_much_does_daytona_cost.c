#include<stdio.h>
int main()
{
    int a[100],b[1000]={0},i,j,k,n,t;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d %d",&n,&k);
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i]);
            if(a[i]==k)
                b[i]=1;
        }
    }
    for(i=0;i<t;i++)
    {
        if(b[i]==1)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
