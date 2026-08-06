#include<stdio.h>
void solve(){
    int n;
    scanf("%d",&n);
    char s[15];
    scanf("%s",s);
    int count1=0;
    int count0=0;


    int total_ones = (n - 1) * count1 + count0;
    printf("%d\n", total_ones);
}
int main(){
    int t;
    if(scanf("%d",&t)==1){
        while (t--)
            solve();
    }
    return 0;
}
