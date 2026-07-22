#include<stdio.h>
void solve(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int a_i;
        scanf("%d",&a_i);
        printf("%d%c",(n+1)-a_i,(i==n-1)?'\n':' ');
    }
}
int main(){
    int t;
    if(scanf("%d",&t)!=1)
        return 0;
    while (t--)
        solve();
    return 0;
}
