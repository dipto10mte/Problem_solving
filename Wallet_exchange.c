#include<stdio.h>
void solve(){
    long long a, b;
    scanf("%lld %lld",&a,&b);
    if((a+b)%2==1)
        printf("Alice\n");

}
int main(){
    int t;
    if(scanf("%d",&t)==1){
        while(t--)
            solve();
    }
    return 0;
}
