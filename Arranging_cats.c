#include<stdio.h>
void solve(){
    int n;
    scanf("%d",&n);
    char s[100005],t[100005];
    scanf("%s %s",s,t);
    int missing=0,extra=0;
    for (int i=0;i<n;i++){
        if(s[i]=='0'&&t[i]=='1') missing++;
        if(s[i]=='1'&&t[i]=='0') extra++;
    }
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
