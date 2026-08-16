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
    for(int col=0;col<m;col++) {
        for(int row=0;row<n;row++){
            if(carpet[row][col]==target[target_idx]){
                target_idx++;
                break;
            }
        }
        if(target_idx==4)
            break;
    }
    if(target_idx==4)
        printf("YES\n");
    else
        printf("NO\n");
}
int main(){
    int t;
    if(scanf("%d",&t)==1){
        while(t--)
            solve();
    }
    return 0;
}
