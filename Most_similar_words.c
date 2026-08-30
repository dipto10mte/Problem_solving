#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
int main(){
    int t;
    if(scanf("%d",&t)!=1)
        return 0;
    while(t--){
        int n,m;
        scanf("%d %d",&n,&m);
        char s[55][10];
        for(int i=0;i<n;i++)
            scanf("%s",s[i]);
        int min_diff = INT_MAX;
        for(int i=0;i<n;i++) {
            for(int j=i+1;j<n;j++){
                int diff=0;
                for(int k=0;k<m;k++)
                    diff+=abs(s[i][k]-s[j][k]);
                if(diff<min_diff)
                    min_diff=diff;
            }
        }
        printf("%d\n",min_diff);
    }
    return 0;
}
