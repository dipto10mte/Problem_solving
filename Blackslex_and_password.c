#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int k,x;
        scanf("%d %d",&k,&x);
        printf("%d\n",k*x+1);
    }
    return 0;
}
