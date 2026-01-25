#include<stdio.h>
int main()
{
    int b=0,i,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
            b=b+i;
        }
        else
        {
            b=b-i;
        }
    }
    printf("%d",b);
    return 0;
}
