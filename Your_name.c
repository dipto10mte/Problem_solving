#include<stdio.h>
int main()
{
    int i,j,n,t;
    scanf("%d",&t);
    int a[t];
    for(i=0;i<t;i++){
        scanf("%d",&n);
        char b[n],c[n];
        a[i]=1;
        int d[26]={0},e[26]={0};
        scanf("%s %s",b,c);
        for(j=0;j<n;j++)
            d[b[j]-97]++;
        for(j=0;j<n;j++)
            e[c[j]-97]++;
        for(j=0;j<26;j++){
            if(d[j]!=e[j]){
                a[i]=0;
                break;
            }
        }
    }

    return 0;
}
