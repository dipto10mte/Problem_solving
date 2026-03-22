#include<stdio.h>
int main()
{
    int i,j,n,t;
    scanf("%d",&t);
    int a[t];
    for(i=0;i<t;i++){
        scanf("%d",&n);
        int b[n],c[n];
        char x;
        a[i]=1;
        for(j=0;j<n;j++){
            scanf(" %c",&x);
            if(x=='R')
                b[j]=2;
            else
                b[j]=1;
        }
        for(j=0;j<n;j++){
            scanf(" %c",&x);
            if(x=='R')
                c[j]=2;
            else
                c[j]=1;
        }
        for(j=0;j<n;j++){
            if(b[j]!=c[j])
                a[i]=0;
        }
    }
    for(i=0;i<t;i++){
        if(a[i]==1)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
