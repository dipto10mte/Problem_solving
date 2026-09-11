#include<stdio.h>
void solve(){
    long long n;
    scanf("%lld",&n);
    printf("%lld\n",(n+1)/10);
}
int main(){
    int t;
    if(scanf("%d",&t)==1){
        while(t--)
            solve();
    }
    return 0;
}
