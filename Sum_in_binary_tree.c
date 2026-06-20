#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while (t--){
        long long n;
        scanf("%lld",&n);
        long long sum=0;
        while (n>=1) {
            sum+=n;
            n/=2;
        }
        printf("%lld\n",sum);
    }
    return 0;
}
