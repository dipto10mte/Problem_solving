#include<stdio.h>
void solve(){
    long long n;
    scanf("%lld",&n);
    if(n%2!=0){
        printf("0\n");
        return;
    }
    long long pairs=n/2;
    printf("%lld\n",1+pairs/2);
}
int main(){
    int t;
    if(scanf("%d",&t)==1){
        while(t--)
            solve();
    }
    return 0;
}
