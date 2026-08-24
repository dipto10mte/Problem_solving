#include<stdio.h>
#include<stdbool.h>
void solve(){
    int n;
    scanf("%d",&n);
    long long a[n];
    long long total_sum=0;
    for(int i=0;i<n;i++){
        scanf("%lld",&a[i]);
        total_sum+=a[i];
    }
    long long target=total_sum/n;
    long long excess=0;
    bool possible=true;

}
int main(){
    int t;
    if(scanf("%d",&t)!=1)
        return 0;
    while(t--)
        solve();
    return 0;
}
