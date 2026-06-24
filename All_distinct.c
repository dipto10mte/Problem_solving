#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int cmp(const void *a,const void *b) {
    return (*(int*)a -*(int*)b);
}

int main() {
    int t;
    scanf("%d",&t);
    while(t--)
        solve();
    return 0;
}
