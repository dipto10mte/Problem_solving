#include<stdio.h>
#include<ctype.h>
#include<string.h>
void solve(){
    int n;
    scanf("%d",&n);
    char s[55];
    scanf("%s",s);
    char compressed[55];
    int len=0;


    if(strcmp(compressed,"meow")==0)
        printf("YES\n");
    else
        printf("NO\n");
}
int main(){
    int t;
    if(scanf("%d",&t)==1){
        while (t--)
            solve();
    }
    return 0;
}
