#include<stdio.h>
void solve(){
    char board[8][9];
    for(int i=0;i<8;i++)
            scanf("%s",board[i]);
    for(int i=1;i<7;i++) {
        for(int j=1;j<7;j++){
            if (board[i][j]=='#'&&
                board[i-1][j-1]=='#'&&
                board[i-1][j+1]=='#'&&
                board[i+1][j-1]=='#'&&
                board[i+1][j+1]=='#') {
                printf("%d %d\n", i + 1, j + 1);
                return;
            }
        }
    }
}
int main(){
    int t;
    if(scanf("%d",&t) == 1) {
        while(t--){
            solve();
        }
    }
    return 0;
}
