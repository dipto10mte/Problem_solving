#include<stdio.h>
int main(){
    int t;
    if(scanf("%d",&t)!=1)
        return 0;
    while(t--){
        long long P;
        scanf("%lld",&P);
        printf("2 %lld\n",P-1);
    }
    return 0;
}
