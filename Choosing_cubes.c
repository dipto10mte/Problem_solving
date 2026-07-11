#include <stdio.h>
#include <stdlib.h>
int compare_desc(const void *a,const void *b){
    return (*(int*)b-*(int*)a);
}

int main(){
    int t;
    if (scanf("%d",&t)==1){
        while(t--)
            solve();
    }
    return 0;
}
