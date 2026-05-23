#include<stdio.h>
int main()
{
    int b[200000],i,j,k=0,m,n,t;
    scanf("%d",&t);
    int a[t];
    for(i=0;i<t;i++){
        scanf("%d",&n);
        int c[n];
        a[i]=n;
        for(j=0;j<n;j++)
            scanf("%d",&c[j]);
        b[k++]=1;
        for(j=1;j<n;j++,k++){
            if(c[j-1]+b[k-1]>c[j])
                b[k]=c[j-1]+b[k-1]-c[j]+1;
            else
                b[k]=1;
        }
    }
    for(i=0,k=0;i<t;i++){
        for(j=0;j<a[i];j++,k++)
            printf("%d ",b[k]);
        printf("\n");
    }
    return 0;
}
