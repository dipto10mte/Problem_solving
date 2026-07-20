#include<stdio.h>
int compare(const void *a,const void *b){
    return (*(int*)b-*(int*)a);
}

int main(){
    int t;
    scanf("%d",&t);
    while(t--)
        solve();
    return 0;
}

