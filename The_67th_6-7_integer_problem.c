#include <stdio.h>
#include <stdlib.h>
int compare(const void *a,const void *b) {
    long long x=*(const long long *)a;
    long long y=*(const long long *)b;
    if(x<y)
        return -1;
    if(x>y)
        return 1;
    return 0;
}

int main(){
    int t;
    if(scanf("%d",&t)==1){
        while(t--)
            solve();
    }
    return 0;
}
