#include<stdio.h>
int main()
{
    int i,t,x;
    scanf("%d",&t);
    int c[2*t];
    for(i=0;i<2*t;i+=2){
        scanf("%d",&x);
        c[i]=1;
        c[i+1]=x-1;
    }
    for(i=0;i<2*t;i+=2)
        printf("%d %d\n",c[i],c[i+1]);
    return 0;
}
