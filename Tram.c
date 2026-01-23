#include<stdio.h>
int main()
{
    int i,n,a,b,x=0,y=0;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d %d",&a,&b);
        x=x+b-a;
        if(x>y)
        {
            y=x;
        }

    }
    printf("%d",y);
    return 0;
}
