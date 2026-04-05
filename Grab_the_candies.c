#include<stdio.h>
int main()
{
    int i,j,m,n,o,p,t;
    scanf("%d",&t);
    int a[t];
    for(i=0;i<t;i++){
        scanf("%d",&n);
        o=0;
        p=0;
        for(j=0;j<n;j++){
            scanf("%d",&m);
            if(m%2==0)
                o+=m;
            else
                p+=m;
        }
        if(o>p)
            a[i]=1;
        else
            a[i]=0;
    }
    for(i=0;i<t;i++){
        if(a[i]==1)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
