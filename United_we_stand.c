#include<stdio.h>
int main()
{
    int b[50000],e,i,j,k,m,n,o=0,t;
    scanf("%d",&t);
    int a[2*t];
    for(i=0;i<2*t;i+=2){
        scanf("%d",&n);
        int d[n];
        m=1;
        for(j=0;j<n;j++)
            scanf("%d",&d[j]);
        for(j=0;j<n;j++){
            for(k=j+1;k<n;k++){
                if(d[j]>d[k]){
                    e=d[j];
                    d[j]=d[k];
                    d[k]=e;
                }
            }
        }
        for(j=1;j<n;j++){
            if(d[j-1]==d[j])
                m++;
        }
        if(m==n){
            a[i]=-1;
        }
        else{
            a[i]=0;
            for(j=0;j<n;j++,o++){
                b[o]=d[j];
                if(d[0]==d[j])
                a[i]++;
            }
            a[i+1]=n-a[i];
        }
    }
    o=0;
    for(i=0;i<2*t;i+=2){
        if(a[i]==-1){
            printf("-1\n");
        }
        else{
            printf("%d %d\n",a[i],a[i+1]);
            for(j=0;j<a[i];j++,o++)
                printf("%d ",b[o]);
            printf("\n");
            for(j=0;j<a[i+1];j++,o++)
                printf("%d ",b[o]);
            printf("\n");
        }
    }
    return 0;
}
