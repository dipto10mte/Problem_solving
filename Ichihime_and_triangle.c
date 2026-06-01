#include<stdio.h>
int main()
{
    int a,b,c,d,i,t;
    scanf("%d",&t);
    int e[3*t];
    for(i=0;i<3*t;i+=3){
        scanf("%d %d %d %d",&a,&b,&c,&d);
        e[i]=b;
        e[i+1]=c;
        e[i+2]=c;
    }
    for(i=0;i<3*t;i+=3)
        printf("%d %d %d\n",e[i],e[i+1],e[i+2]);
    return 0;
}
