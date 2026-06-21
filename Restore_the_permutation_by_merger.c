#include <stdio.h>
int main(){
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d",&n);
        int a[105];
        int seen[55]={0};
        for(int i=0;i<2*n;i++)
            scanf("%d", &a[i]);
        int p[55],idx=0;
        for (int i=0;i<2*n;i++) {
            if (!seen[a[i]]){
                seen[a[i]]=1;
                p[idx++]=a[i];
            }
        }
        for (int i = 0; i < n; i++) {
            printf("%d%c",p[i],i+1==n?'\n':' ');
        }
    }
    return 0;
}
