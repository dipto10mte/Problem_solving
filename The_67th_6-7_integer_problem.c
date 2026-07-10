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
void solve(){
    long long arr[7];
    for (int i=0;i<7;i++) {
        if(scanf("%lld",&arr[i])!=1)
            return;
    }
    qsort(arr,7,sizeof(long long),compare);
    long long ans=arr[6];
    for (int i=0;i<6;i++)
        ans-=arr[i];
    printf("%lld\n",ans);
}
int main(){
    int t;
    if(scanf("%d",&t)==1){
        while(t--)
            solve();
    }
    return 0;
}
