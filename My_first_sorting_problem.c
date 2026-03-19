#include<stdio.h>
int main()
{
    int i,t,x,y;
    scanf("%d",&t);
    int a[2*t];
    for(i=0;i<2*t;i+=2){
        scanf("%d %d",&x,&y);
        if(x<y){
            a[i]=x;
            a[i+1]=y;
        }
        else{
            a[i]=y;
            a[i+1]=x;
        }
    }
    for(i=0;i<2*t;i+=2)
        printf("%d %d\n",a[i],a[i+1]);
    return 0;
}
