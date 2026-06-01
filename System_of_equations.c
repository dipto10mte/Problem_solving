#include<stdio.h>
int main()
{
    int i,j,k=0,m,n;
    scanf("%d %d",&n,&m);
    for(i=0;i<=m;i++){
        for(j=0;j<=n;j++){
            if(i*i+j==n&&i+j*j==m)
                k++;
        }
    }
    printf("%d",k);
    return 0;
}
