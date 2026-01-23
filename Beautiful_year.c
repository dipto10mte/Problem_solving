#include<stdio.h>
int main()
{
    int y,a,b,c,d;
    scanf("%d",&y);
    while(1)
    {
        y++;
        a=y/1000;
        b=(y-a*1000)/100;
        c=(y-b*100-a*1000)/10;
        d=y-c*10-b*100-a*1000;
        if(a!=b&&a!=c&&a!=d&&b!=c&&b!=d&&c!=d)
        {
            printf("\n%d",y);
            break;
        }
        else
        {
            continue;
        }
    }
    return 0;
}
