#include<stdio.h>
void solve(){
    int n;
    scanf("%d",&n);
    int a[n],b[n];
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(int i=0;i<n;i++)
        scanf("%d",&b[i]);
    int total_diff=a[n-1];
    for(int i=0;i<n-1;i++){
        if(a[i]>b[i+1])
            total_diff+=(a[i]-b[i+1]);
    }
    printf("%d\n",total_diff);
}
int main(){
    int t;
    if(scanf("%d",&t)!=1)
        return 0;
    while(t--)
        solve();
    return 0;
}
