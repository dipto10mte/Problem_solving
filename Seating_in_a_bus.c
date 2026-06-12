#include<stdio.h>
int main()
{
    int i,j,n,t;
    scanf("%d",&t);
    int a[t];
    for(i=0;i<t;i++){
        scanf("%d",&n);
        int b[n+1],c[n+2];
        a[i]=1;
        for(j=1;j<=n;j++){
            scanf("%d",&b[j]);
            c[j]=0;
        }
        c[b[1]]=1;
        for(j=2;j<=n;j++){
            if(b[j]==n){
                if(c[n-1]==0)
                    a[i]=0;
            }
            else if(b[j]==1){
                if(c[2]==0)
                    a[i]=0;
            }
            else if(c[b[j]-1]==0&&c[b[j]+1]==0){
                a[i]=0;
                break;
            }
            c[b[j]]=1;
        }
    }
    for(i=0;i<t;i++){
        if(a[i])
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
