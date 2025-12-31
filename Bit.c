#include<stdio.h>
int main()
{
    int n,i,b=0;
    char a[4];
    scanf("%d",&n);
    while(n--)
    {
        scanf("%s",&a);
        if(a[1]=='+')
        {
            b++;
        }
        else
        {
            b--;
        }
    }
    printf("%d",b);
    return 0;
}
