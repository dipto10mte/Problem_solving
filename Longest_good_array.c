#include<stdio.h>
#include<math.h>
void solve(){
    long long l,r;
    if(scanf("%lld %lld",&l,&r)!=2)
        return;
    long long diff=r-l;
    long long k=(long long)((1.0+sqrt(1.0+8.0*diff))/2.0);
    printf("%lld\n",k);
}
int main(){
    int t;
    if(scanf("%d",&t)==1){
        while(t--)
            solve();
    }
    return 0;
}
