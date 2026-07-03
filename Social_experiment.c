#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long long n;
        scanf("%lld",&n);
        long long ans;
        if(n==2)
            ans=2;
        else if(n==3)
            ans=3;
        else
            ans=n%2;
        printf("%lld\n",ans);
    }
    return 0;
}
