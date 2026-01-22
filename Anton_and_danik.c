#include<stdio.h>
#include<string.h>
int main()
{
    int i,n,x=0,y=0;
    char a[100001];
    scanf("%d",&n);
    scanf("%s",&a);
    for(i=0;i<strlen(a);i++)
    {
        if(a[i]=='A')
        {
            x++;
        }
        if(a[i]=='D')
        {
            y++;
        }

    }
    if(x>y)
    {
        printf("Anton");
    }
    else if(y>x)
    {
        printf("Danik");
    }
    else
    {
        printf("Friendship");
    }
    return 0;
}
