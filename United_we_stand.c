#include<stdio.h>
int main()
{
    int b[50000],e,i,j,k,m,n,o=0,t,x,y;
    scanf("%d",&t);
    int a[2*t];
    for(i=0;i<t;i+=2){
        scanf("%d",&n);
        int d[n];
        m=1;
        x=0;
        y=0;
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
            i--;
        }
        else{
            o+=n;

        }
    }
    return 0;
}
