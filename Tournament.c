#include<stdio.h>
void solve(){
    int n,j,k;
    if(scanf("%d %d %d",&n,&j,&k)!=3)
        return;
    int target_val=0;
    int max_val=0;

    if(k>1||target_val==max_val)
        printf("YES\n");
    else
        printf("NO\n");
}
int main(){
    int t;
    if(scanf("%d",&t)!=1)
        return 0;
    while(t--)
        solve();
    return 0;
}
