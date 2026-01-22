#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,n=0;
    char s[101],t[101];
    scanf("%s",&s);
    scanf("%s",&t);
    if(strlen(s)!=strlen(t))
    {
        printf("NO");
        return 0;
    }
    j=strlen(t)-1;
    for(i=0;i<strlen(s);i++,j--)
    {
        if(s[i]==t[j])
        {
            n++;
        }
    }
    if(n==strlen(s))
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}
