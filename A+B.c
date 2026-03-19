#include<stdio.h>
int main()
{
    int i,t,x,y;
    scanf("%d",&t);
    int a[t];
    for(i=0;i<t;i++){
        scanf("%d %d",&x,&y);
        a[i]=x+y;
    }
    for(i=0;i<t;i++)
        printf("%d\n",a[i]);
    return 0;
}
