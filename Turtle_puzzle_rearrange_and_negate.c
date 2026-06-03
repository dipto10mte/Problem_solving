#include<stdio.h>
int main()
{
    int i,j,m,n,t;
    scanf("%d",&t);
    int a[t];
    for(i=0;i<t;i++){
        scanf("%d",&n);
        a[i]=0;
        for(j=0;j<n;j++){
            scanf("%d",&m);
            if(m<0)
                a[i]-=m;
            else
                a[i]+=m;
        }
    }
    for(i=0;i<t;i++)
        printf("%d\n",a[i]);
    return 0;
}
