#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        long long a[200005],b[200005];
        for (int i=0;i<n;i++)
            scanf("%lld",&a[i]);
        for (int i=0;i<n;i++)
        scanf("%lld",&b[i]);
        long long ans=0;
        for (int i=0;i<n;i++) {
            if (a[i]>b[i])
            ans+=a[i]-b[i];
        }
        printf("%lld\n",ans+1);
    }
    return 0;
}
