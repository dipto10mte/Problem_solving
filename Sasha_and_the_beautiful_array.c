#include<stdio.h>
void solve(){
    int n;
    if(scanf("%d",&n)!=1)
        return;
    long long min_val=2e9;
    long long max_val=-1;
    for(int i=0;i<n;i++){
        long long val;
        scanf("%lld",&val);
        if(val<min_val)
            min_val = val;
        if(val>max_val)
            max_val = val;
    }
    printf("%lld\n",max_val-min_val);
}
int main(){
    int t;
    if(scanf("%d",&t)!=1)
        return 0;
    while (t--)
        solve();
    return 0;
}
