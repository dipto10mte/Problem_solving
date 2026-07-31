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
    for(int i=0;i<n;i++){
        char c=tolower((unsigned char)s[i]);
        if(len==0||compressed[len-1]!=c)
            compressed[len++] =c;
    }
    compressed[len]='\0';
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
