#include<stdio.h>
#include<string.h>
int main()
{
    int i;
    char s[201];
    scanf("%s",s);
    for(i=0;i<strlen(s);i++)
    {
        if(s[i]=='.')
            printf("0");
        else if(s[i+1]=='.')
        {
            printf("1");
            i++;
        }
        else
        {
            printf("2");
            i++;
        }
    }
    return 0;
}
