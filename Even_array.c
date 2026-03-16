#include<stdio.h>
int main()
{
    int i,j,m,n,t;
    scanf("%d",&t);
    int b[t];
    for(i=0;i<t;i++){
        scanf("%d",&n);
        int a[n];
        m=0;
        for(j=0;j<n;j++){
            scanf("%d",&a[j]);
            if(j%2==0&&a[j]%2!=0)
                m++;
            else if(j%2!=0&&a[j]%2==0)
                m++;
        }
        b[i]=m/2;
        if(m%2==1)
            b[i]=-1;
    }
    for(i=0;i<t;i++)
        printf("%d\n",b[i]);
    return 0;
}
