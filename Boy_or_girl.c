#include<stdio.h>
#include<string.h>
int main()
{
    int b;
    char a[101];
    scanf("%s",&a);
    b=strlen(a);
    if(b%2==0)
    {
        printf("CHAT WITH HER!");
    }
    else
    {
        printf("IGNORE HIM!");
    }
    return 0;
}
