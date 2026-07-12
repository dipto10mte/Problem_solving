#include <stdio.h>
#include <stdlib.h>
void solve(){
    int n,x;
    if (scanf("%d %d",&n,&x)!=2)
        return;
    int first_i=-1;
    int last_i=-1;
    for (int i=1;i<=n;i++) {
        int door;
        scanf("%d",&door);
        if(door==1){
            if (first_i == -1)
                first_i = i;
            last_i = i;
        }
    }
    if (first_i==-1){
        printf("YES\n");
        return;
    }
    int needSec=last_i-first_i+1;
    if(x>=needSec)
        printf("YES\n");
    else
        printf("NO\n");
}
int main(){
    int t;
    if (scanf("%d",&t)==1){
        while(t--)
            solve();
    }
    return 0;
}
