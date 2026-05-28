#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j,k=0,l,m,n,t;
    scanf("%d",&t);
    int a[t];
    int *b = malloc(sizeof(int) * t * 200000);
    for(i=0;i<t;i++){
        scanf("%d",&a[i]);
        m=0;
        l=0;
        n=k;
        for(j=0;j<a[i];j++,k++){
            scanf("%d",&b[k]);
            if(b[k]>m){
                l=m;
                m=b[k];
            }
            else if(b[k]>l&&b[k]!=m)
                l=b[k];
        }
        if(l==0)
            l=m;
        for(j=n;j<k;j++){
            if(b[j]!=m)
                b[j]=b[j]-m;
            else
                b[j]=m-l;
        }
    }
    k=0;
    for(i=0;i<t;i++){
        for(j=0;j<a[i];j++,k++)
            printf("%d ",b[k]);
        printf("\n");
    }
    free(b);
    return 0;
}
