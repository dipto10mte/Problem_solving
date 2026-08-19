#include<stdio.h>
#include<string.h>
void solve(){
    int n;
    if(scanf("%d",&n)!=1)
        return;
    int count[25]={0};
    for(int i=0;i<n;i++){
        int x;
        scanf("%d",&x);
        count[x]++;
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
