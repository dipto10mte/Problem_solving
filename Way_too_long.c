#include<stdio.h>
#include<string.h>
int main()
{
    int i,n,l;
    char a[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s",a);
        l=strlen(a);
        if(l>10)
        {
            printf("%c%d%c\n",a[0],l-2,a[l-1]);
        }
        else
        {
            printf("%s\n",a);
        }
    }
    return 0;
}
