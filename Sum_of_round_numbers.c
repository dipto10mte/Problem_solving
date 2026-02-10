#include<stdio.h>
int main()
{
    int a,b,c,i,j,n,p,q;
    scanf("%d",&n);
    int x[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
    for(i=0;i<n;i++)
    {
        a=x[i];
        p=0;
        q=0;
        while(a>0)
        {
            c=a%10;
            q++;
            if(c!=0)
            {
                p++;
            }
            a=a/10;
            for(j=0;j<q&&c!=0;j++)
            {

            }
        }
        printf("%d");
    }
    return 0;
}
