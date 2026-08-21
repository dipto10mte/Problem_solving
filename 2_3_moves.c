#include<stdio.h>
void solve(){
    long long n;
    scanf("%lld",&n);
    if(n==1)
        printf("2\n");
    else if(n%3==0)
        printf("%lld\n",n/3);

}
int main(){
    int t;
    if(scanf("%d",&t)==1){
        while(t--)
            solve();
    }
    return 0;
}
