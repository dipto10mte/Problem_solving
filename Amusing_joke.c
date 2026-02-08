#include<stdio.h>
#include<string.h>
int main()
{
    int i,x[26]={0},y[26]={0};
    char a[101],b[101],c[101];
    scanf("%s",a);
    scanf("%s",b);
    scanf("%s",c);
    if(strlen(a)+strlen(b)!=strlen(c))
    {
        printf("NO");
        return 0;
    }
    for(i=0;i<strlen(a);i++)
    {
        x[a[i]-'A']++;
    }
    for(i=0;i<strlen(b);i++)
    {
        x[b[i]-'A']++;
    }
    for(i=0;i<strlen(c);i++)
    {
        y[c[i]-'A']++;
    }
    for(i=0;i<26;i++)
    {
        if(x[i]!=y[i])
        {
            printf("NO");
            return 0;
        }
    }
    printf("YES");
    return 0;
}
