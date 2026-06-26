#include <stdio.h>
#include <string.h>
int main(){
    char s[105];
    scanf("%s",s);
    int n=strlen(s);
    long long ans=0;
    for(int i=0;i<n;i++){
        if(s[i]=='A') {
            long long left=0,right=0;
            for(int j=0;j<i;j++)
                if(s[j]=='Q')
                    left++;
            for(int j=i+1;j<n;j++)
                if(s[j]=='Q')
                    right++;
            ans+=left*right;
        }
    }
    printf("%lld\n",ans);
    return 0;
}
