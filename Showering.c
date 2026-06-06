#include<stdio.h>
int main()
{
    int i,j,m,n,s,t;
    scanf("%d",&t);
    int a[t];

    for(i=0;i<t;i++){
        if(a[i])
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
