#include<stdio.h>
int main()
{
    int i,j,m,n,t,x;
    scanf("%d",&t);
    int a[t];
    for(i=0;i<t;i++){
        scanf("%d",&n);
        int b[n];
        x=10;
        m=1;
        a[i]=1;
        for(j=0;j<n;j++){
            scanf("%d",&b[j]);
            if(x>b[j])
                x=b[j];
        }
        for(j=0;j<n;j++){
            if(b[j]==x&&m==1){
                a[i]=a[i]*(x+1);
                m=0;
                continue;
                }
            a[i]=a[i]*b[j];
        }
    }
    for(i=0;i<t;i++)
        printf("%d\n",a[i]);
    return 0;
}
