#include<stdio.h>
int main(){
    int t;
    if(scanf("%d",&t)!=1)
        return 0;
    while(t--){
        int n;
        char d;
        scanf("%d %c",&n,&d);
        char s[200005];
        scanf("%s",s);
        int inserted=0;
        for(int i=0;i<n;i++){
            if(!inserted&&d>s[i]){
                putchar(d);
                inserted=1;
            }
            putchar(s[i]);
        }
        if(!inserted)
            putchar(d);
        putchar('\n');
    }
    return 0;
}
