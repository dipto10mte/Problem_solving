#include<stdio.h>
int main()
{
    int i,t,x,y;
    scanf("%d",&t);
    int a[t];
    for(i=0;i<t;i++){
        scanf("%d",&x);
        a[i]=10;
        while(x){
            y=x%10;
            x=x/10;
            if(a[i]>y)
                a[i]=y;
        }
    }
    for(i=0;i<t;i++)
        printf("%d\n",a[i]);
    return 0;
}
