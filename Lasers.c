#include<stdio.h>
void solve(){
    int n,m;
    long long x,y;
    if(scanf("%d %d %lld %lld",&n,&m,&x,&y)!=4)
        return;
    for(int i=0;i<n;i++){
        long long a;
        scanf("%lld",&a);
    }
    for(int i=0;i<m;i++){
        long long b;
        scanf("%lld",&b);
    }
    printf("%d\n",n+m);
}
int main(){
    int t;
    if(scanf("%d",&t)==1){
        while(t--)
            solve();
    }
    return 0;
}
