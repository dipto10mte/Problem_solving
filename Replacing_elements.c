#include<stdio.h>
#include<stdlib.h>
int compare(const void *a,const void *b) {
    return (*(int*)a -*(int*)b);
}
void solve(){
    int n,d;
    scanf("%d %d",&n,&d);
    int a[100];
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    qsort(a,n,sizeof(int),compare);
    if(a[n-1]<=d||(a[0]+a[1]<=d))
        printf("YES\n");
    else
        printf("NO\n");
}
int main(){
    int t;
    if(scanf("%d",&t)==1){
        while(t--)
            solve();
    }
    return 0;
}
