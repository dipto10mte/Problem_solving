#include<stdio.h>
int main()
{
    int a,i,j,l,m,n,o,p,t;
    scanf("%d",&t);
    int b[t];
    for(i=0;i<t;i++){
        scanf("%d",&n);
        l=0;
        m=0;
        p=n/2;
        o=(n+1)/2;
        for(j=0;j<n;j++){
            scanf("%d",&a);
            if(j%2==0&&a%2==0)
                l++;
            else if(j%2==1&&a%2==1)
                m++;
        }
        if(l==0&&m==0)
            b[i]=1;
        else if(l+m==n)
            b[i]=1;
        else if(l==0&&m==p)
            b[i]=1;
        else if(l==o&&m==0)
            b[i]=1;
        else
            b[i]=0;
    }
    for(i=0;i<t;i++){
        if(b[i])
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
