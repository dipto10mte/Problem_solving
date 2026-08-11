#include<stdio.h>
#include<string.h>
void solve(){
    int n,m;
    scanf("%d %d",&n,&m);
    int count=0;
    int current_len=0;
    int stop=0;
    for (int i=0;i<n;i++){
        char s[501];
        scanf("%s",s);
        int len=strlen(s);
        if(!stop&&current_len+len<=m){
            current_len+=len;
            count++;
        }
        else
            stop=1;
    }
    printf("%d\n",count);
}
int main(){
    int t;
    if(scanf("%d",&t)==1){
        while(t--)
            solve();
    }
    return 0;
}
