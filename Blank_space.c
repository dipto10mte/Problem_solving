
#include<stdio.h>
int main()
{
    int a,b[1000]={0},i,j,m,n,s,t;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        s=0;
        scanf("%d",&n);
        for(j=0;j<n;j++)
        {
            scanf("%d",&a);
            if(a==0)
                s++;
            else
            {
                if(b[i]<=s)
                {
                    b[i]=s;
                    s=0;
                }
            }
            if(j==n-1)
            {
                if(b[i]<=s)
                {
                    b[i]=s;
                    s=0;
                }
            }
        }
    }
    for(i=0;i<t;i++)
        printf("%d\n",b[i]);
    return 0;
}
