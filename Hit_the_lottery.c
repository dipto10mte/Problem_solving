#include<stdio.h>
int main()
{
    int a,n=0;
    scanf("%d",&a);
    if(a>99)
    {
        n=n+a/100;
        a=a%100;
    }
    if(a>19)
    {
        n=n+a/20;
        a=a%20;
    }
    if(a>9)
    {
        n=n+a/10;
        a=a%10;
    }
    if(a>4)
    {
        n=n+a/5;
        a=a%5;
    }
    if(a<5)
    {
        n=n+a;
    }
    printf("%d",n);
    return 0;
}
