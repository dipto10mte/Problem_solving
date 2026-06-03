#include<stdio.h>
int main()
{
    int k,m,n;
    scanf("%d %d %d",&n,&m,&k);
    if(n>m||n>k)
        printf("NO");
    else
        printf("YES");
    return 0;
}
