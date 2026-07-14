#include <stdio.h>
void solve(){
    long long m;
    scanf("%lld",&m);
    long long p=1;
    while(p*10<=m)
        p *= 10;
    printf("%lld\n",m-p);
}
int main(){
    int t;
    scanf("%d",&t);
    while(t--)
        solve();
    return 0;
}
