#include<stdio.h>
int max(int a,int b) {
    return (a>b)?a:b;
}
int count_fibonacciness(int a1,int a2,int a3,int a4,int a5){
    int count = 0;
    if(a1+a2==a3)
        count++;
    if(a2+a3==a4)
        count++;
    if(a3+a4==a5)
        count++;
    return count;
}

int main(){
    int t;
    if(scanf("%d",&t)!=1)
        return 0;
    while(t--)
        solve();
    return 0;
}
