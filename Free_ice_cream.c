#include<stdio.h>
int main()
{
    int d,i,m=0,n;
    long long x;
    char c;
    scanf("%d %lld",&n,&x);
    for(i=0;i<n;i++){
        scanf(" %c %d",&c,&d);
        if(c=='+')
            x+=d;
        else{
            if(x>=d)
                x-=d;
            else
                m++;
        }
    }
    printf("%lld %d",x,m);
    return 0;
}
