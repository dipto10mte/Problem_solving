#include<stdio.h>
#include<string.h>
int main()
{
    int b,c,d,i,j;
    int e=0;
    char a[101];
    scanf("%s",&a);
    b=strlen(a);
    for(i=0;i<b;i++)
    {
        d=0;
        for(j=i+1;j<b;j++)
        {
            if(a[i]==a[j])
            {
                d++;
            }
        }
        if(d==0)
        {
            e++;
        }
    }
    if(e%2==0)
    {
        printf("CHAT WITH HER!");
    }
    else
    {
        printf("IGNORE HIM!");
    }
    return 0;
}
