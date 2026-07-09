#include <stdio.h>
#include <stdlib.h>
int compare(const void *a,const void *b){
    return (*(int*)a-*(int*)b);
}
void solve(){
    int n;
    scanf("%d",&n);
    int *a=(int*)malloc(n*sizeof(int));
    for (int i=0;i<n;i++)
        scanf("%d",&a[i]);
    qsort(a,n,sizeof(int),compare);
    int unique_count=1;
    for(int i=1;i<n;i++){
        if (a[i]!=a[i-1])
            unique_count++;
    }
    printf("%d\n", unique_count);
    free(a);
}
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        solve();
    }
    return 0;
}
