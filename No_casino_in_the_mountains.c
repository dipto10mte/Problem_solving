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
