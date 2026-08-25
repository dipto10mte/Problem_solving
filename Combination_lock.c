#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,ans=0;
    scanf("%d",&n);
    char s1[1005],s2[1005];
    scanf("%s %s",s1,s2);
    for(int i=0; i<n;i++){
        int d=abs(s1[i]-s2[i]);
        ans+=(d<10-d)?d:(10-d);
    }
    printf("%d\n",ans);
    return 0;
}
