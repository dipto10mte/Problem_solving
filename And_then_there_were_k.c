#include<stdio.h>
int main()
{
    int i,k,n,t;
    scanf("%d",&t);
    int a[t];
    for(i=0;i<t;i++){
        scanf("%d",&n);
        k=1;
        while(k<=n/2){
            k=k*2;
        }
        a[i]=k-1;
    }
    for(i=0;i<t;i++)
        printf("%d\n",a[i]);
    return 0;
}
