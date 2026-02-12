#include<stdio.h>
int main()
{
    int a,b,c,m,p,q,r,s;
    scanf("%d %d %d %d",&p,&q,&r,&s);
    if(p>q&&p>r&&p>s)
    {
        a=p-s;
        b=p-r;
        c=p-q;
    }
    else if(q>p&&q>r&&q>s)
    {
        a=q-s;
        b=q-r;
        c=q-p;
    }
    else if(r>p&&r>q&&r>s)
    {
        a=r-s;
        b=r-q;
        c=r-p;
    }
    else
    {
        a=s-r;
        b=s-q;
        c=s-p;
    }
    printf("%d %d %d",a,b,c);
    return 0;
}
