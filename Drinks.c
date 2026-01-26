#include<stdio.h>
int main()
{
    int b,i,n;
    float a=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&b);
        a=a+b;
    }
    printf("%0.12f",a/n);
    return 0;
}
