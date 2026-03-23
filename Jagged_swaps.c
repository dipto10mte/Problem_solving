#include<stdio.h>
int main()
{
    int i,j,m,n,t;
    scanf("%d",&t);
    int a[t];
    for(i=0;i<t;i++){
        scanf("%d",&n);
        int b[n];
        a[i]=1;
        for(j=0;j<n;j++)
            scanf("%d",&b[j]);
        for(j=1;j<n-1;j++){
            if(b[j-1]<b[j]&&b[j]>b[j+1]){
                m=b[j];
                b[j]=b[j+1];
                b[j+1]=m;
            }
        }
        for(j=0;j<n;j++){
            if(b[j]!=j+1){
                a[i]=0;
                break;
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
