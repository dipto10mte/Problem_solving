#include<stdio.h>
int main()
{
    int i,p,q,r,s;
    scanf("%d %d %d %d",&p,&q,&r,&s);
    if(p==q&&q==r&&r==s)
    {
        printf("3");
    }
    else if((p==q&&q==r)||(p==q&&q==s)||(p==q&&r==s)||(p==r&&q==s)||(p==s&&q==r)||(q==r&&r==s))
    {
        printf("2");
    }
    else if(p==q||p==r||p==s||q==r||q==s||r==s)
    {
        printf("1");
    }
    else
    {
        printf("0");
    }
    return 0;
}
