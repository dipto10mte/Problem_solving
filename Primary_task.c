#include<stdio.h>
#include<string.h>
void solve(){
    char s[20];
    scanf("%s",s);
    int len=strlen(s);
    if(len>=3&&s[0]=='1'&&s[1]=='0'&&s[2]!='0'){
        if(len==3&&s[2]=='1')
            printf("NO\n");
        else
            printf("YES\n");
    }
    else
        printf("NO\n");
}
int main(){
    int t;
    if (scanf("%d",&t)==1){
        while(t--)
            solve();
    }
    return 0;
}
