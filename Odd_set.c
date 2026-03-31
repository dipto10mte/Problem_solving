#include<stdio.h>
int main()
{
    int i,j,m,n,t;
    scanf("%d",&t);
    int a[t];
    for(i=0;i<t;i++){
        m=0;
        scanf("%d",&n);
        int b[2*n];
        for(j=0;j<2*n;j++){
            scanf("%d",&b[j]);
            if(b[j]%2==1)
                m++;
        }
        if(n==m)
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
