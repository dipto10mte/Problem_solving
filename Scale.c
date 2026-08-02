#include<stdio.h>
void solve(){
    int n,k;
    scanf("%d %d",&n,&k);
    char grid[1005][1005];
    for(int i=0;i<n;i++)
        scanf("%s", grid[i]);
    for(int i=0;i<n;i+=k){
        for(int j=0;j<n;j+=k)
            putchar(grid[i][j]);
        putchar('\n');
    }
}
int main(){
    int t;
    if(scanf("%d",&t)==1){
        while (t--)
            solve();
    }
    return 0;
}
