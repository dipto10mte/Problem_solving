#include<stdio.h>
int main()
{
    int i,j,m,n,t;
    scanf("%d",&t);
    int a[t];
    for(i=0;i<t;i++){
        scanf("%d",&n);
        int b[n];
        m=0;
        for(j=0;j<n;j++)
            scanf("%d",&b[j]);
        for(j=1;j<n;j++){
                if(b[j-1]!=b[j])
                    m++;
        }
        if(n==2)
            a[i]=1;
        else if(m==0)
            a[i]=1;
        else if(n==3&&m==1)
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
