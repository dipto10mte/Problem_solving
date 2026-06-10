#include<stdio.h>
int main()
{
    int a,i,j,m,n,t;
    scanf("%d",&t);
    int b[t];
    for(i=0;i<t;i++){
        scanf("%d",&n);
        m=0;
        for(j=0;j<n;j++){
            scanf("%d",&a);
            m+=a;
        }
        if(m<n)
            b[i]=1;
        else if(m==n)
            b[i]=0;
        else
            b[i]=m-n;
    }
    for(i=0;i<t;i++)
        printf("%d\n",b[i]);
    return 0;
}
