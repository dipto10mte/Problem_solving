#include<stdio.h>
int main()
{
    int i,t,w,x,y,z;
    scanf("%d",&t);
    int a[t];
    for(i=0;i<t;i++)
    {
        scanf("%d %d %d",&x,&y,&z);
        if(x>y&&x>z)
        {
            w=x;
            x=y;
            y=z;
            z=w;
            if(x>y)
            {
                w=x;
                x=y;
                y=w;
            }
        }
        else if(y>x&&y>z)
        {
            w=y;
            y=z;
            z=w;
            if(x>y)
            {
                w=x;
                x=y;
                y=w;
            }
        }
        else
        {
            if(x>y)
            {
                w=x;
                x=y;
                y=w;
            }
        }
        a[i]=y;
    }
    for(i=0;i<t;i++)
        printf("%d\n",a[i]);
    return 0;
}
