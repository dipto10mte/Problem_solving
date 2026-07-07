#include<stdio.h>
#include<stdlib.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long long a,b,c;
        scanf("%lld %lld %lld",&a,&b,&c);
        long long n=2*llabs(a-b);
        if (a>n||b>n||c>n)
            printf("-1\n");
        else{
            long long d=c+n/2;
            while(d>n)d-=n;
            printf("%lld\n",d);
        }
    }
    return 0;
}
