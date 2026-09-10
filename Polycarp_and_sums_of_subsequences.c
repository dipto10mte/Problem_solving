#include <stdio.h>
void solve(){
    long long b[7];
    for(int i=0;i<7;i++)
        scanf("%lld",&b[i]);
    long long a1=b[0];
    long long a2=b[1];
    long long a3=b[6]-a1-a2;
    printf("%lld %lld %lld\n",a1,a2,a3);
}
int main(){
    int t;
    if(scanf("%d",&t)==1){
        while(t--)
            solve();
    }
    return 0;
}
