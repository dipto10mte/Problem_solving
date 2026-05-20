#include<stdio.h>

int main()
{
    int i,j,k=0,l,t;
    scanf("%d",&t);
    int a[t],b[90000];

    for(i=0;i<t;i++){
        scanf("%d",&a[i]);
        int c[a[i]];
        l=a[i]-1;

        for(j=0;j<a[i];j++)
            scanf("%d",&c[j]);
        for(j=0;j<a[i];j+=2,k+=2,l--){
            b[k]=c[j/2];
            b[k+1]=c[l];
        }

        if(a[i]%2==1){
            k--;
            b[k]=c[a[i]/2];
        }

    }

    k=0;
    for(i=0;i<t;i++){
        for(j=0;j<a[i];j++,k++)
            printf("%d ",b[k]);
        printf("\n");
    }
    return 0;
}
