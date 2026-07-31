#include<stdio.h>
#include<string.h>
void solve(){
    char s[105];
    if(scanf("%s",s)!=1)
        return;
    int len=strlen(s);
    int first=-1,last=-1;
    for(int i=0;i<len;i++){
        if(s[i]=='1'){
            if(first==-1)
                first=i;
            last=i;
        }
    }
    if(first==-1){
        printf("0\n");
        return;
    }
    int zeroes_to_erase=0;
    for(int i=first;i<=last;i++){
        if(s[i]=='0')
            zeroes_to_erase++;
    }
    printf("%d\n",zeroes_to_erase);
}
int main(){
    int t;
    if(scanf("%d",&t)==1){
        while(t--)
            solve();
    }
    return 0;
}
