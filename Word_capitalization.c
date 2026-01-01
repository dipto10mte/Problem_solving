#include<stdio.h>
int main()
{
    char b,c,a[1001];
    scanf("%s",&a);
    if(a[0]>='a')
    {
        b=a[0];
        c=b-32;
        a[0]=c;
        printf("%s",a);
    }
    else
    {
        printf("%s",a);
    }
    return 0;
}
