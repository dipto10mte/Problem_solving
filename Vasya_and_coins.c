#include <stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long long a,b;
        scanf("%lld %lld",&a,&b);
        long long ans;
        if(a==0)
            ans=1;
        else
            ans=a+2*b+1;
        printf("%lld\n",ans);
    }
    return 0;
}
