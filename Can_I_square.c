#include<stdio.h>
#include<math.h>
int main()
{
    int b,i,j,m,n,o,t;
    scanf("%d",&t);
    int a[t];
    for(i=0;i<t;i++){
        scanf("%d",&n);
        m=0;
        for(j=0;j<n;j++){
            scanf("%d",&b);
            m+=b;
        }
        o=sqrt(m);
        if(o*o==m)
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
