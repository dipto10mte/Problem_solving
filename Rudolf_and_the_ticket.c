#include<stdio.h>
int main()
{
    int h,i,j,k,m,n,t;
    scanf("%d",&t);
    int a[t];
    for(i=0;i<t;i++){
        scanf("%d %d %d",&m,&n,&k);
        int b[m],c[n];
        a[i]=0;
        for(j=0;j<m;j++)
            scanf("%d",&b[j]);
        for(j=0;j<n;j++)
            scanf("%d",&c[j]);
        for(j=0;j<m;j++){
            for(h=0;h<n;h++)
                if(b[j]+c[h]<=k)
                    a[i]++;
        }
    }
    for(i=0;i<t;i++)
        printf("%d\n",a[i]);
    return 0;
}
