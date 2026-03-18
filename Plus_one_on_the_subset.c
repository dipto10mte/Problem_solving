#include<stdio.h>
int main()
{
    int i,j,m,n,t;
    scanf("%d",&t);
    int a[t];
    for(i=0;i<t;i++){
        scanf("%d",&n);
        int b[n];
        int max=0,min=1000000000;
        for(j=0;j<n;j++){
            scanf("%d",&b[j]);
            if(max<b[j])
                max=b[j];
            if(min>b[j])
                min=b[j];
        }
        a[i]=max-min;
    }
    for(i=0;i<t;i++)
        printf("%d\n",a[i]);
    return 0;
}
