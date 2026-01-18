#include<stdio.h>
#include<string.h>
int main()
{
    char a[101],b[101];
    int c,i,j,p,q,r;
    p=0;
    q=0;
    r=0;
    scanf("%s",&a);
    printf("%s",a);
    c=strlen(a);
    for(i=1;i<c;i+2)
    {
        b[i]='+';
    }
    for(i=1;i<=c;i+2)
    {
        if(a[i]==1)
        {
            p=p+2;
        }
        else if(a[i]==2)
        {
            q=q+2;
        }
        else
        {
            r=r+2;
        }
    }
    for(i=0;i<p;i+2)
    {
        b[i]=1;
    }
    printf("%s",b);
    return 0;
}
