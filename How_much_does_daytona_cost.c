#include<stdio.h>
int main()
{
    int a,i,j,k,n,t;
    scanf("%d",&t);
    int b[t];
    for(i=0;i<t;i++)
    {
        scanf("%d %d",&n,&k);
        b[i]=0;
        for(j=0;j<n;j++)
        {
            scanf("%d",&a);
            if(a==k)
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
