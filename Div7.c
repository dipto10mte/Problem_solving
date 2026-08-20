#include<stdio.h>
void solve(){
    int n;
    scanf("%d",&n);
    if(n%7==0){
        printf("%d\n",n);
        return;
    }
    int base=n-(n%10);
    for(int d=0;d<=9;d++){
        if((base+d)%7==0){
            printf("%d\n",base + d);
            return;
        }
    }
}
int main(){
    int t;
    if(scanf("%d",&t)!=1)
        return 0;
    while(t--)
        solve();
    return 0;
}
