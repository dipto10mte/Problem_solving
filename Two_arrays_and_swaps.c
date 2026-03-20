#include<stdio.h>
int main()
{
    int i,j,k,l,m,n,t,x;
    scanf("%d",&t);
    int a[t];
    for(i=0;i<t;i++){
        scanf("%d %d",&n,&k);
        int b[n],c[n];
        a[i]=0;
        m=0;
        for(j=0;j<n;j++)
            scanf("%d",&b[j]);
        for(j=0;j<n;j++)
            scanf("%d",&c[j]);
        for(j=0;j<n;j++){
            for(l=j+1;l<n;l++){
                if(b[j]<b[l]){
                    x=b[j];
                    b[j]=b[l];
                    b[l]=x;
                }
            }
        }
        for(j=0;j<n;j++){
            for(l=j+1;l<n;l++){
                if(c[j]<c[l]){
                    x=c[j];
                    c[j]=c[l];
                    c[l]=x;
                }
            }
        }
        for(j=0;j<k;j++){
            if(c[j]>b[j]){
                a[i]+=c[j];
                m++;
            }
        }
        for(j=0;j<n-m;j++)
            a[i]+=b[j];
    }
    for(i=0;i<t;i++)
        printf("%d\n",a[i]);
    return 0;
}

