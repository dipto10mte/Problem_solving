#include<stdio.h>
#include<string.h>
int main()
{
    int c,d,e=0,f=0,i;
    char a[101],b[101];
    scanf("%s",&a);
    scanf("%s",&b);
    c=strlen(a);
    d=strlen(b);
    for(i=0;i<c;i++)
    {
        if(a[i]<'a')
        {
            e=e+a[i]+32;
        }
        else
        {
            e=e+a[i];
        }
    }
    for(i=0;i<d;i++)
    {
        if(a[i]<'a')
        {
            f=f+a[i]+32;
        }
        else
        {
            f=f+a[i];
        }
    }
    if(e>f)
    {
        printf("1");
    }
    else if(e<f)
    {
        printf("-1");
    }
    else
    {
        printf("0");
    }
    return 0;
}
