#include<stdio.h>
void solve(){
    int n;
    scanf("%d",&n);
    char s[100005],t[100005];
    scanf("%s %s",s,t);
    int missing=0,extra=0;

    int ans=(missing>extra)?missing:extra;
    printf("%d\n",ans);
}
int main(){
    int t;
    if(scanf("%d",&t)==1){
        while (t--)
            solve();
    }
    return 0;
}
