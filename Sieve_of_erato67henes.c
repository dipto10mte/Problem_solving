#include<stdio.h>
void solve(void){
    int n;
    scanf("%d",&n);
    int found=0;
    for(int i=0;i<n;i++){
        int x;
        scanf("%d",&x);
        if(x==67)
            found = 1;
    }
    if(found)
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
