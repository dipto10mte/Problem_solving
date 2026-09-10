#include <stdio.h>
void solve(){
    long long b[7];
    for(int i=0;i<7;i++)
        scanf("%lld",&b[i]);

}
int main(){
    int t;
    if(scanf("%d",&t)==1){
        while(t--)
            solve();
    }
    return 0;
}
