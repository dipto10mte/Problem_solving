#include<stdio.h>
#include<string.h>
int main(){
    int t;
    if(scanf("%d",&t)!=1)
        return 0;
    while(t--){
        int n;
        scanf("%d",&n);
        char s[200005];
        scanf("%s",s);
        int seen[26]={0};
        for(int i=0;i<n;i++)
            seen[s[i]-'a']=1;
        char r[27];
        int m=0;
        for(int i=0;i<26;i++){
            if(seen[i])
                r[m++]=(char)('a'+i);
        }
        char map[256];
        for(int i=0;i<m;i++)
            map[(unsigned char)r[i]]=r[m-1-i];
        for(int i=0;i<n;i++)
            s[i]=map[(unsigned char)s[i]];
        printf("%s\n",s);
    }
    return 0;
}
