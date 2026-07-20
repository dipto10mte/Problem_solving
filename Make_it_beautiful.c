#include<stdio.h>
int compare(const void *a,const void *b){
    return (*(int*)b-*(int*)a);
}
void solve(){
    int n;
    scanf("%d",&n);
    int a[50];
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    qsort(a,n,sizeof(int),compare);

}
int main(){
    int t;
    scanf("%d",&t);
    while(t--)
        solve();
    return 0;
}

