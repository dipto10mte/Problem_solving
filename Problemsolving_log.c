#include<stdio.h>
#include<string.h>
void solve(){
    int n;
    scanf("%d",&n);
    char s[505];
    scanf("%s",s);
    int count[26]={0};
    for(int i=0;i<n;i++)
        count[s[i]-'A']++;
    int solved=0;
    for(int i=0;i<26;i++){
        if(count[i]>=(i+1))
            solved++;
    }
    printf("%d\n",solved);
}

