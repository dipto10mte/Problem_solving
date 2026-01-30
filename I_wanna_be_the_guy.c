#include <stdio.h>
int main()
{
    int n,p,q;
    int level[101]={0};
    int x,i;
    scanf("%d",&n);
    scanf("%d",&p);
    for(i=0;i<p;i++)
    {
        scanf("%d",&x);
        level[x]=1;
    }
    scanf("%d",&q);
    for(i=0;i<q;i++)
    {
        scanf("%d",&x);
        level[x]=1;
    }
    for(i=1;i<=n;i++)
    {
        if(level[i]==0)
        {
            printf("Oh, my keyboard!");
            return 0;
        }
    }
    printf("I become the guy.");
    return 0;
}

