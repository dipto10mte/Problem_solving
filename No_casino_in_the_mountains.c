#include<stdio.h>
#define MAXN 100005
int a[MAXN];
int pref[MAXN];
void solve(){
    int n,k;
    if(scanf("%d %d",&n,&k)!=2)
        return;
    pref[0]=0;
    for(int i=0;i<n;i++) {
        scanf("%d",&a[i]);
        pref[i+1]=pref[i]+a[i];
    }
    int ans=0;
    int i=0;
    while (i+k<=n){
        int rainy_days=pref[i+k]-pref[i];
        if(rainy_days==0){
            ans++;
            i+=k+1;
        }
        else
            i++;
    }
    printf("%d\n",ans);
}
int main(){
    setvbuf(stdout,NULL,_IOFBF,16384);
    int t;
    if(scanf("%d",&t)==1){
        while(t--)
            solve();
    }
    return 0;
}
