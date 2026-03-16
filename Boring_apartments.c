#include<stdio.h>
int main()
{
    int i,m,n,t,x;
    scanf("%d",&t);
    int a[t];
    for(i=0;i<t;i++){
        n=0;
        a[i]=0;
        scanf("%d",&x);
        if(x<10)
            m=x-1;
        else
            m=x%10-1;
        while(x){
            n++;
            x=x/10;
            a[i]+=n;
        }
        a[i]+=m*10;
    }
    for(i=0;i<t;i++)
        printf("%d\n",a[i]);
    return 0;
}
