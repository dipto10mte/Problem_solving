#include<stdio.h>
int main()
{
    int a,i,j,n,s,t;
    scanf("%d",&t);
    int b[t];
    for(i=0;i<t;i++)
    {
        s=0;
        b[i]=0;
        scanf("%d",&n);
        for(j=0;j<n;j++)
        {
            scanf("%d",&a);
            if(a==0){
                s++;
                if(b[i]<s)
                    b[i]=s;
            }
            else
                s=0;
        }
    }
    for(i=0;i<t;i++)
        printf("%d\n",b[i]);
    return 0;
}
