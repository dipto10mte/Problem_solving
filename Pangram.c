#include<stdio.h>
int main()
{
    int i,j,n,x=0,y=0;
    char s[101];
    scanf("%d",&n);
    if(n<26)
    {
        printf("NO");
        return 0;
    }
    scanf("%s",&s);
    for(i=0;i<n;i++)
    {
        if(s[i]<97)
        {
            s[i]=s[i]+32;
        }
    }
    for(i=0;i<n;i++)
    {
        y=0;
        for(j=i+1;j<n;j++)
        {
            if(s[i]==s[j])
            {
                y++;
            }
        }
        if(y==0)
        {
            x++;
        }
    }
    if(x==26)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}
