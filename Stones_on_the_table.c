#include<stdio.h>
int main()
{
    int n,i,a=0;
    char s[51];
    scanf("%d",&n);
    scanf("%s",s);
    for(i=0;i<n;i++)
    {
        if(s[i]==s[i+1])
        {
            a++;
        }
    }
    printf("%d",a);
    return 0;
}

