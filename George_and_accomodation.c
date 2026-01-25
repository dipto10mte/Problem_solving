#include<stdio.h>
int main()
{
    int a=0,i,n,p,q;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d %d",&p,&q);
        if(q-p>1)
        {
            a++;
        }
    }
    printf("%d",a);
    return 0;
}
