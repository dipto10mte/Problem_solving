#include<stdio.h>
int main()
{
    int i,j,m,n,t;
    scanf("%d",&t);
    int a[t];
    for(i=0;i<t;i++){
        scanf("%d",&n);
        char b[n+1],x;
        int c[26]={0};
        scanf("%s",b);
        a[i]=1;
        m=1;
        c[b[0]-65]=1;;
        for(j=1;j<n;j++){
            if(b[j]!=b[j-1]){
                if(c[b[j]-65]==0)
                    c[b[j]-65]=1;
                else{
                    a[i]=0;
                    break;
                }
            }
        }
    }
    for(i=0;i<t;i++){
        if(a[i]==1)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
