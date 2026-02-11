#include<stdio.h>
int main()
{
    int i,j,n,p,q,r,s;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        r=0;
        s=0;
        scanf("%d",&p);
        for(j=0;j<3;j++)
        {
            q=p%10;
            r+=q;
            p=p/10;
        }
        for(j=0;j<3;j++)
        {
            q=p%10;
            s+=q;
            p=p/10;
        }
        if(r==s)
            a[i]=1;
        else
            a[i]=0;
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==1)
            printf("YES");
        else
            printf("NO");
        printf("\n");
    }
    return 0;
}
