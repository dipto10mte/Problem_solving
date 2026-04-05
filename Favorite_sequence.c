#include<stdio.h>
int main()
{
    int i,j,k=0,l,m,t;
    scanf("%d",&t);
    int a[t],b[90000];
    for(i=0;i<t;i++){
        scanf("%d",&a[i]);
        l=k;
        k+=a[i];
        m=k;
        int c[a[i]];
        for(j=0;j<a[i];j++)
            scanf("%d ",&c[j]);
        for(j=0;j<a[i];j+=2,l++,m--){
            b[l]=c[j];
            b[m]=c[j+1];
        }
        if(a[i]%2==1)
            b[l]=c[a[i]-1];
    }
    k=0;
    for(i=0;i<t;i++){
        for(j=0;j<a[i];j++,k++)
            printf("%d ",b[k]);
        printf("\n");
    }
    return 0;
}
