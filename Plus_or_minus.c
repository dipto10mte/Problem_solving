#include<stdio.h>
int main()
{
    int a,b,c,i,t;
    scanf("%d",&t);
    char x[t];
    for(i=0;i<t;i++)
    {
        scanf("%d %d %d",&a,&b,&c);
        if(a+b==c)
            x[i]='+';
        else
            x[i]='-';
    }
    for(i=0;i<t;i++)
        printf("%c\n",x[i]);
    return 0;
}
