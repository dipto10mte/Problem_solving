#include<stdio.h>
int main()
{
    int i,j,l,m,n,t;
    scanf("%d",&t);
    int a[t];
    for(i=0;i<t;i++){
        scanf("%d",&n);
        int b[n];
        l=0;
        m=0;
        for(j=0;j<n;j++){
            scanf("%d",&b[j]);
            if(b[j]==1)
                l++;
            else
                m++;
        }
        if(l%2==1)
            a[i]=0;
        else if(l==0&&m%2==1)
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
