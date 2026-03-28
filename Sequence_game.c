#include<stdio.h>
int main()
{
    int b[200000],i,j,m=0,n,o,t;
    scanf("%d",&t);
    int a[t];
    for(i=0;i<t;i++){
        scanf("%d",&n);
        int c[n];
        a[i]=m;
        for(j=0;j<n;j++){
            scanf("%d",&c[j]);
        }
        for(j=0;j<n;j++,m++){
            b[m]=c[j];
            if(c[j]>c[j+1]){
                b[m+1]=c[j+1];
                m++;
            }
        }
        a[i]=m-a[i];
    }
    m=0;
    for(i=0;i<t;i++){
        printf("%d\n",a[i]);
        for(j=0;j<a[i];j++,m++)
            printf("%d ",b[m]);
        printf("\n");
    }
    return 0;
}
