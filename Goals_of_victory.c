#include<stdio.h>
int main()
{
    int i,j,m,n,o,t;
    scanf("%d",&t);
    int a[t];
    for(i=0;i<t;i++){
        scanf("%d",&n);
        o=0;
        for(j=0;j<n-1;j++){
            scanf("%d",&m);
            o+=m;
        }
        a[i]=-o;
    }
    for(i=0;i<t;i++)
        printf("%d\n",a[i]);
    return 0;
}

