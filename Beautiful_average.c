#include<stdio.h>
int main()
{
    int a,i,j,n,t;
    scanf("%d",&t);
    int b[t];
    for(i=0;i<t;i++){
        scanf("%d",&n);
        b[i]=0;
        for(j=0;j<n;j++){
            scanf("%d",&a);
            if(b[i]<a)
                b[i]=a;
        }
    }
    for(i=0;i<t;i++)
        printf("%d\n",b[i]);
    return 0;
}
