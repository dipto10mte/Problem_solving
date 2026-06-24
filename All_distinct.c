#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int cmp(const void *a,const void *b) {
    return (*(int*)a -*(int*)b);
}
void solve() {
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i=0;i<n;i++)
        scanf("%d",&a[i]);
    qsort(a,n,sizeof(int),cmp);
    int u=1;
    for (int i=1;i<n;i++)
        if(a[i]!=a[i-1])
            u++;
    int d=n-u;
    if(d%2==0)
        printf("%d\n",u);
    else
        printf("%d\n",u - 1);
}
int main() {
    int t;
    scanf("%d",&t);
    while(t--)
        solve();
    return 0;
}
