#include<stdio.h>
int main()
{
    int x,y,z,n,k,l,c,d,p,nl,np;
    scanf("%d %d %d %d %d %d %d %d",&n,&k,&l,&c,&d,&p,&nl,&np);
    x=(k*l)/(nl*n);
    y=(c*d)/n;
    z=p/(np*n);
    if(x<y&&x<z)
        printf("%d",x);
    else if(y<x&&y<z)
        printf("%d",y);
    else
        printf("%d",z);
    return 0;
}
