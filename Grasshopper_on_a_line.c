#include<stdio.h>
int main()
{
    int i,k,n,p,q,t,x;
    scanf("%d",&t);
    int a[2*t];
    for(i=0;i<2*t;i+=2)
        scanf("%d %d",&a[i],&a[i+1]);
    for(i=0;i<2*t;i+=2){
        n=a[i];
        k=a[i+1];
        if(n<k)
            printf("%d\n%d",1,n);
        else if(n==k)
            printf("%d\n%d %d",2,n-1,1);
        else{
            if(n%k!=0)
                printf("%d\n%d",1,n);
        }
        printf("\n");
    }
    return 0;
}
