#include<stdio.h>
int main()
{
    int i,j,m,n,t;
    scanf("%d",&t);
    int a[t];
    for(i=0;i<t;i++){
        scanf("%d",&n);
        int b[n];
        a[i]=0;
        m=10000000;
        for(j=0;j<n;j++){
            scanf("%d",&b[j]);
            a[i]+=b[j];
            if(m>b[j])
                m=b[j];
        }
        a[i]-=n*m;
    }
    for(i=0;i<t;i++)
        printf("%d\n",a[i]);
    return 0;
}
