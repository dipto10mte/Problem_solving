#include<stdio.h>
#include<stdlib.h>
int compare(const void *a,const void *b){
    return(*(int*)a-*(int*)b);
}

int main(){
    int t;
    if(scanf("%d",&t)==1){
        while(t--)
            solve();
    }
    return 0;
}
