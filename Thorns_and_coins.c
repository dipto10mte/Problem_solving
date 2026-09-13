#include<stdio.h>
void solve(){
    int n;
    if(scanf("%d",&n)!=1)
        return;
    char s[55];
    scanf("%s",s);
    int coins=0;
    for(int i=0;i<n;i++){
        if(s[i]=='*'&&i+1<n&&s[i+1]=='*')
            break;
        if(s[i]=='@')
            coins++;
    }
    printf("%d\n",coins);
}
int main(){
    int t;
    if(scanf("%d",&t)==1){
        while(t--)
            solve();
    }
    return 0;
}
