#include<stdio.h>
#include<stdbool.h>
void solve(){
    int n,m;
    scanf("%d %d",&n,&m);
    char carpet[n][m + 1];
    for(int i=0;i<n;i++)
        scanf("%s", carpet[i]);
    const char target[]="vika";
    int target_idx=0;

}
int main(){
    int t;
    if(scanf("%d",&t)==1){
        while(t--)
            solve();
    }
    return 0;
}
