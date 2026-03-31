#include<stdio.h>
int main()
{
    int i,j,k,m,n,o,t;
    scanf("%d",&t);
    int a[t];
    for(i=0;i<t;i++){
        m=0;
        scanf("%d",&n);
        int b[n];
        for(j=0;j<n;j++){
            scanf("%d",&b[j]);
            if(b[j]==2)
                m++;
        }
        if(m==0)
            a[i]=1;
        else if(m%2!=0)
            a[i]=-1;
        else{
            o=m/2;
            for(j=0,k=0;k<o;j++){
                if(b[j]==2)
                    k++;
            }
            a[i]=j;
        }
    }
    for(i=0;i<t;i++)
        printf("%d\n",a[i]);
    return 0;
}
