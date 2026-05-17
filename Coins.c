#include<stdio.h>
int main()
{
    int i,t;
    long long k,n;
    scanf("%d",&t);
    int a[t];
    for(i=0;i<t;i++){
        scanf("%lld %lld",&n,&k);
        if(n%2==0)
            a[i]=1;
        else if(k%2==1)
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
