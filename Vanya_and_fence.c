#include<stdio.h>
int main()
{
    int n,h,i,x=0;
    scanf("%d %d",&n,&h);
    int c[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&c[i]);
        if(c[i]>h)
        {
            x=x+2;
        }
        else
        {
            x++;
        }
    }
    printf("%d",x);
    return 0;
}
