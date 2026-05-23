#include<stdio.h>
int main()
{
    int i,j,n,t;
    long long p,q,r,s;
    scanf("%d",&t);
    long long c[t];
    for(i=0;i<t;i++){
        scanf("%d",&n);
        int a[n],b[n];
        p=q=1000000000;
        c[i]=0;
        for(j=0;j<n;j++){
            scanf("%d",&a[j]);
            if(a[j]<p)
                p=a[j];
        }
        for(j=0;j<n;j++){
            scanf("%d",&b[j]);
            if(b[j]<q)
                q=b[j];
        }
        for(j=0;j<n;j++){
            r=a[j]-p;
            s=b[j]-q;
            if(r>s)
                c[i]+=r;
            else
                c[i]+=s;
        }
    }
    for(i=0;i<t;i++)
        printf("%lld\n",c[i]);
    return 0;
}
