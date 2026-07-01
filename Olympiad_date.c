#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while (t--){
        int n;
        scanf("%d",&n);
        int cnt[10]={};
        int ans=0;
        for(int i=1;i<=n;i++){
            int d;
            scanf("%d",&d);
            cnt[d]++;
            if(!ans&&
                cnt[0]>=3&&cnt[1]>=1&&cnt[2]>=2&&
                cnt[3]>=1&&cnt[5]>=1) {
                ans=i;
            }
        }
        printf("%d\n",ans);
    }
    return 0;
}
