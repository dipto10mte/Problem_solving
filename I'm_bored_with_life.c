#include<stdio.h>
int main(){
    long long a, b;
    if(scanf("%lld %lld",&a,&b)!= 2)
        return 0;
    long long min_val=(a<b)?a:b;
    long long factorial=1;
    for(long long i=1;i<=min_val;i++)
        factorial*=i;
    printf("%lld\n",factorial);
    return 0;
}
