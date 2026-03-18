#include<stdio.h>
int main()
{
    int i,j,k,n,t;
    scanf("%d",&t);
    int a[t];
    for(i=0;i<t;i++){
        scanf("%d",&n);
        int b[n];
        a[i]=1;
        for(j=0;j<n;j++)
            scanf("%d",&b[j]);
        for(j=0;j<n;j++){
            for(k=0;k<n;k++){
                if(b[j]==b[k]&&j!=k){
                    a[i]=0;
                    break;
                }
            }
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
