#include<stdio.h>
void solve(){
    long long k,x;
    scanf("%lld %lld",&k,&x);
    long long initial_val=x<<k;
    printf("%lld\n",initial_val);
}
int main(){
    int t;
    if(scanf("%d",&t)!=1)
        return 0;
    while(t--)
        solve();
    return 0;
}
