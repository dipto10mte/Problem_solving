#include<stdio.h>
#include<string.h>
void solve(){
    int n;
    scanf("%d",&n);
    char s[n+1];
    scanf("%s",s);
    int seen[26][26]={0};
    int distinct_pairs=0;
    for(int i=0;i<n-1;i++){
        int u =s[i]-'a';
        int v=s[i+1]-'a';
        if(!seen[u][v]){
            seen[u][v]=1;
            distinct_pairs++;
        }
    }
    printf("%d\n",distinct_pairs);
}
int main(){
    int t;
    if(scanf("%d",&t)!=1)
        return 0;
    while(t--)
        solve();
    return 0;
}
