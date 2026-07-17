#include<stdio.h>
void solve(){
    int x,y;
    scanf("%d %d",&x,&y);
    int screens=(y+1)/2;
    int remaining_cells=(screens*15)-(y*4);

    printf("%d\n",screens);
}
int main(){
    int t;
    scanf("%d",&t);
    while(t--)
        solve();
    return 0;
}
