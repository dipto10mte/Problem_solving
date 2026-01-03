#include<stdio.h>
#include<string.h>
int main()
{
    int c,i;
    char a[101],b[101];
    scanf("%s",&a);
    scanf("%s",&b);
    c=strlen(a);
    for(i=0;i<c;i++)
    {
        if(a[i]<'a')
        {
            a[i]=a[i]+32;
        }
        else
        {
            a[i]=a[i];
        }
        if(b[i]<'a')
        {
            b[i]=b[i]+32;
        }
        else
        {
            b[i]=b[i];
        }
    }
    for(i=0;i<c;i++)
    {
        if(a[i]>b[i])
        {
            printf("1");
            return 0;
        }
        else if(a[i]<b[i])
        {
            printf("-1");
            return 0;
        }
    }
    printf("0");
    return 0;
}
