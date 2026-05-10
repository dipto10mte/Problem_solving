#include<stdio.h>
int main()
{
    int i,n;
    char s[4];
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%s",s);
        if((s[0]=='Y'||s[0]=='y')&&(s[1]=='E'||s[1]=='e')&&(s[2]=='S'||s[2]=='s'))
            a[i]=1;
        else
            a[i]=0;
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==1)
            printf("YES");
        else
            printf("NO");
        printf("\n");
    }
    return 0;
}
