#include<stdio.h>
void solve(){
    int n;
    if(scanf("%d",&n)!=1)
        return;
    long long sum=0;
    for(int i=0;i<n;i++){
        long long a;
        scanf("%lld",&a);
        sum+=a;
    }
    long long ans=sum-(n-1);
    printf("%lld\n",ans);
}
int main(){
    int t;
    if(scanf("%d",&t)!=1)
        return 0;
    while(t--)
        solve();
    return 0;
}
