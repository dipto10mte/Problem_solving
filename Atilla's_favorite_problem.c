#include<stdio.h>
int main()
{
    int i,j,m,n,t;
    scanf("%d",&t);
    int a[t];
    for(i=0;i<t;i++){
        scanf("%d",&n);
        char b[n];
        m=0;
        scanf("%s",b);
        for(j=0;j<n;j++){
            if(b[j]>m)
                m=b[j];
        }
        a[i]=m-96;
    }
    for(i=0;i<t;i++)
        printf("%d\n",a[i]);
    return 0;
}
