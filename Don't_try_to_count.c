#include<stdio.h>
#include<string.h>
void solve(){
    int n,m;
    scanf("%d %d",&n,&m);
    char x[2000];
    char s[30];
    scanf("%s",x);
    scanf("%s",s);
    int ops=0;
    while(ops<=6){
        if(strstr(x,s)!=NULL){
            printf("%d\n",ops);
            return;
        }
        int current_len=strlen(x);
        if (current_len*2>=sizeof(x))
            break;
        strcpy(x+current_len,x);
        ops++;
    }
    printf("-1\n");
}
int main() {
    int t;
    if (scanf("%d",&t)==1) {
        while(t--)
            solve();
    }
    return 0;
}
