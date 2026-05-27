#include<stdio.h>
int main()
{
    int d,i,l,r,t,u;
    scanf("%d",&t);
    int a[t];
    for(i=0;i<t;i++){
        scanf("%d %d %d %d",&l,&r,&d,&u);
        if(l==r&&r==d&&d==u)
            a[i]=1;
        else
            a[i]=0;
    }
    for(i=0;i<t;i++){
        if(a[i])
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
