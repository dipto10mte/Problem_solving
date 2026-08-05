#include<stdio.h>
int main(){
    int n;
    if(scanf("%d",&n)!=1)
        return 0;
    char s[60];
    scanf("%s",s);
    int index=0;
    int step=1;
    while(index<n){
        putchar(s[index]);
        index+=step;
        step++;
    }
    putchar('\n');
    return 0;
}
