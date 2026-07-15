#include<stdio.h>
void solve(){
    int n,k;
    if(scanf("%d %d",&n,&k)!= 2)
        return;
    int max_val=0;
    long long total_ops=0;
    for (int i=0;i<k;i++){
        int a;
        scanf("%d",&a);
        if (a>max_val)
            max_val=a;
        total_ops+=(2LL*a-1);
    }
    total_ops-=(2LL*max_val-1);
    printf("%lld\n",total_ops);
}
int main(){
    int t;
    if(scanf("%d",&t)==1){
        while(t--)
            solve();
    }
    return 0;
}
