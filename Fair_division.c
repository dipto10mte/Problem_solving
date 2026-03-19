#include<stdio.h>
int main()
{
    int i,j,m,n,t,x,y;
    scanf("%d",&t);
    int a[t];
    for(i=0;i<t;i++){
        scanf("%d",&n);
        int b[n];
        m=0;
        for(j=0;j<n;j++){
            scanf("%d",&b[j]);
            if(b[j]%2==1)
                m++;
        }
        if(n%2==1)
            a[i]=0;
        else if(m%2==1)
            a[i]=0;
        else
            a[i]=1;
    }
    for(i=0;i<t;i++){
        if(a[i]==1)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
