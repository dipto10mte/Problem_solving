#include<stdio.h>
int main()
{
    int a,b,i,t,x[55];
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d %d",&a,&b);
        x[i]=b-a;
    }
    for(i=0;i<t;i++)
        printf("%d\n",x[i]);
    return 0;
}
