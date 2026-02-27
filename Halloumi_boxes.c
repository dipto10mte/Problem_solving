#include<stdio.h>
int main()
{
    int a[100],b[101]={0},c,i,j,k,n,t;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d %d",&k,&n);
        for(j=0;j<t;j++)
            scanf("%d",&a[i]);
        if(n>=2)
            b[i]=1;
        else
        {
            c=0;
            for(j=1;j<n;j++)
            {
                if(a[j-1]<=a[j])
                    c++;
            }
            if(c==k)
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
