#include<stdio.h>
int main()
{
    int b,i,j,m,n,t;
    scanf("%d",&t);
    int a[t];
    for(i=0;i<t;i++){
        scanf("%d",&n);
        m=0;
        for(j=0;j<n;j++){
            scanf("%d",&b);
            m^=b;
        }
        if(m==0)
            a[i]=0;
        else if(n%2==1)
            a[i]=m;
        else
            a[i]=-1;
    }
    for(i=0;i<t;i++)
        printf("%d\n",a[i]);
    return 0;
}
