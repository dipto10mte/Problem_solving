#include<stdio.h>
int main()
{
    int i,n,t;
    scanf("%d",&t);
    int a[2*t];
    for(i=0;i<2*t;i+=2){
        scanf("%d",&n);
        a[i]=a[i+1]=n/3;
        if(n%3==1)
            a[i]++;
        else if(n%3==2)
            a[i+1]++;
    }
    for(i=0;i<2*t;i+=2)
        printf("%d %d\n",a[i],a[i+1]);
    return 0;
}
