#include<stdio.h>
int main()
{
    int a[9262],b[9262],c[9262],i,n;
    char s[9262];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d %d %d",&a[i],&b[i],&c[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==b[i]+c[i]||b[i]==c[i]+a[i]||c[i]==a[i]+b[i])
        {
            printf("YES");
        }
        else
        {
            printf("NO");
        }
        printf("\n");
    }
    return 0;
}
