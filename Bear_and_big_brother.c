#include<stdio.h>
int main()
{
    int a,b,i=0;
    scanf("%d %d",&a,&b);
    while(1)
    {
        a=3*a;
        b=2*b;
        i++;
        if(a>b)
        {
            break;
        }
        else
        {
            continue;
        }
    }
    printf("%d",i);
    return 0;
}
