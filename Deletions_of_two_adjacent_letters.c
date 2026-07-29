#include<stdio.h>
#include<string.h>
#include<stdbool.h>
void solve(){
    char s[105];
    char c;
    scanf("%s",s);
    scanf(" %c",&c);
    int len=strlen(s);
    bool possible=false;
    for(int i=0;i<len;i++){
        if(s[i]==c&&i%2==0){
            possible=true;
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
        while(t--)
            solve();
    }
    return 0;
}
