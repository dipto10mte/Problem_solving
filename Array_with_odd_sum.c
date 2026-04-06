#include<stdio.h>
int main()
{
    int i,j,m,n,o,t;
    scanf("%d",&t);
    int a[t];
    for(i=0;i<t;i++){
        scanf("%d",&n);
        m=0;
        for(j=0;j<n;j++){
            scanf("%d",&o);
            if(o%2==1)
                m++;
        }
        if(m%2==1)
            a[i]=1;
        else
            a[i]=0;
    }

    return 0;
}
