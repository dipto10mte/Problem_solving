#include<stdio.h>
int main(){
    int t;
    if(scanf("%d",&t)==1){
        while(t--){
            long long a,b;
            scanf("%lld %lld",&a,&b);
            printf("%lld\n",a^b);
        }
    }
    return 0;
}
