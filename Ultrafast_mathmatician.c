#include<stdio.h>
#include<string.h>
int main()
{
    int i;
    char a[101],b[101],c[101];
    scanf("%s",a);
    scanf("%s",b);
    for(i=0;i<strlen(a);i++)
    {
        if(a[i]==b[i])
        {
            c[i]='0';
        }
        else
        {
            c[i]='1';
        }
    }
    c[i]='\0';
    printf("%s",c);
    return 0;
}
