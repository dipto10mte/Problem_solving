#include<stdio.h>
#include<string.h>
int main()
{
    int i,a=0;
    char n[20];
    scanf("%s",&n);
    for(i=0;i<strlen(n);i++)
    {
        if(n[i]=='4'||n[i]=='7')
        {
            a++;
        }
    }
    if(a==4||a==7)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}
