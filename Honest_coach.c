#include<stdio.h>
int main()
{
    int c,i,j,k,n,t;
    scanf("%d",&t);
    int a[t];
    for(i=0;i<t;i++){
        scanf("%d",&n);
        int b[n];
        for(j=0;j<n;j++)
            scanf("%d",&b[j]);
        for(j=0;j<n;j++){
            for(k=j+1;k<n;k++){
                if(b[j]>b[k]){
                    c=b[j];
                    b[j]=b[k];
                    b[k]=c;
                }
            }
        }
        a[i]=b[1]-b[0];
        for(j=2;j<n;j++){
            if(a[i]>b[j]-b[j-1])
                a[i]=b[j]-b[j-1];
        }
    }
    for(i=0;i<t;i++)
        printf("%d\n",a[i]);
    return 0;
}
