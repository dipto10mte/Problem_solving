#include<stdio.h>
#include<stdbool.h>

int main(){
    int t;
    if(scanf("%d",&t)!=1)
        return 0;
    while(t--)
        solve();
    return 0;
}
