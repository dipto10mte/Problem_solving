#include<stdio.h>
int main()
{
    int i,t;
    char c;
    scanf("%d",&t);
    int a[t];
    for(i=0;i<t;i++)
    {
        scanf(" %c",&c);
        if(c=='c'||c=='d'||c=='e'||c=='f'||c=='o'||c=='r'||c=='s')
        {
            a[i]=1;
        }
        else
        {
            a[i]=0;
        }
    }
    for(i=0;i<t;i++)
    {
        if(a[i]==1)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}
