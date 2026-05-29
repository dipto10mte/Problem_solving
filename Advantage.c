#include<stdio.h>
int main()
{
    int b[200000],i,j,k=0,l,m,n,t;
    scanf("%d",&t);
    int a[t];
    for(i=0;i<t;i++){
        scanf("%d",&a[i]);
        m=0;
        l=0;
        n=k;
        for(j=0;j<a[i];j++,k++)
            scanf("%d",&b[k]);
        for(j=n;j<k;j++){
            if(b[j]>m){
                l=m;
                m=b[j];
            }
            else if(b[j]==m)
                l=m;
            else if(b[j]>l)
                l=b[j];
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
    return 0;
}
