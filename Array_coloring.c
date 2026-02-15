#include<stdio.h>
int main()
{
    int a,i,j,m,n,t;
    scanf("%d",&t);
    int b[t];
    for(i=0;i<t;i++)
    {
        m=0;
        scanf("%d",&n);
        for(j=0;j<n;j++)
        {
            scanf("%d",&a);
            if(a%2!=0)
                m++;
        }
        b[i]=m;
    }
    for(i=0;i<t;i++)
    {
        if(b[i]%2==0)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
