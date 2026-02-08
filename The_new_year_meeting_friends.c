#include<stdio.h>
int main()
{
    int b,x,y,z;
    scanf("%d %d %d",&x,&y,&z);
    if(x>y&&x>z)
    {
        if(y>z)
        {
            b=x-z;
        }
        else
        {
            b=x-y;
        }
    }
    else if(y>x&&y>z)
    {
        if(x>z)
        {
            b=y-z;
        }
        else
        {
            b=y-x;
        }
    }
    else
    {
        if(x>y)
        {
            b=z-y;
        }
        else
        {
            b=z-x;
        }
    }
    printf("%d",b);
    return 0;
}
