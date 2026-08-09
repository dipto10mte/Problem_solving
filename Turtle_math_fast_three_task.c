#include<stdio.h>
void solve(void) {
    int n;
    if(scanf("%d",&n)!=1)
        return;
    int sum=0;
    int has_mod1=0;
    for(int i=0;i<n;i++){
        int val;
        scanf("%d",&val);
        sum+=val;
        if(val%3==1)
            has_mod1=1;
    }

}
int main(){
    int t;
    if(scanf("%d",&t)==1){
        while(t--)
            solve();
    }
    return 0;
}
