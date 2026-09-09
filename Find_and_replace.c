#include<stdio.h>
#include<stdbool.h>
#include<string.h>
void solve(){
    int n;
    if(scanf("%d",&n)!=1)
        return;
    char s[2005];
    scanf("%s",s);
    int parity[26];
    memset(parity,-1,sizeof(parity));
    bool possible=true;
    for(int i=0;i<n;i++){
        int char_idx=s[i]-'a';
        int current_parity=i%2;
        if(parity[char_idx]==-1)
            parity[char_idx]=current_parity;
        else if(parity[char_idx]!=current_parity){
            possible=false;
            break;
        }
    }
    if(possible)
        printf("YES\n");
    else
        printf("NO\n");
}
int main(){
    int t;
    if(scanf("%d",&t)==1){
        while(t--){
            solve();
        }
    }
    return 0;
}
