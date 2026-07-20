#include<stdio.h>
void solve(){
    long long l,r;
    scanf("%lld %lld",&l,&r);
    if(2*l<=r)
        printf("%lld %lld\n",l,2*l);
    else
        printf("-1 -1\n");
}
int main(){
    int t;
    scanf("%d",&t);
    while(t--)
        solve();
    return 0;
}
