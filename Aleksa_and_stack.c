#include<stdio.h>
void solve(){
    int n;
    if(scanf("%d",&n)!=1)
        return;
    for(int i=1;i<=n;i++)
        printf("%d%c",2*i-1,i==n?'\n':' ');
}
int main(){
    int t;
    if(scanf("%d",&t)==1){
        while(t--)
            solve();
    }
    return 0;
}
