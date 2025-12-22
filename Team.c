#include<stdio.h>
int main()
{
    int a,b,c,i,n,p;
    p=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d %d %d",&a,&b,&c);
        if(a+b+c>1)
        {
             p++;
        }
    }
    printf("%d",p);
    return 0;
}
