#include<Stdio.h>
int main()
{
    int b,c,d,e,i,j,a[5][5];
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            scanf("%d",&a[i][j]);
            if(a[i][j]==1)
            {
                b=i+1;
                c=j+1;
            }
        }
    }
    if(b>3)
    {
        d=b-3;
    }
    else
    {
        d=3-b;
    }
    if(c>3)
    {
        e=c-3;
    }
    else
    {
        e=3-c;
    }
    printf("%d",d+e);
    return 0;
}
