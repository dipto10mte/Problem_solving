#include<stdio.h>
void solve(){
    int n,k;
    scanf("%d %d",&n,&k);
    char grid[1005][1005];
    for(int i=0;i<n;i++)
        scanf("%s", grid[i]);

}
int main(){
    int t;
    if(scanf("%d",&t)==1){
        while (t--)
            solve();
    }
    return 0;
}
