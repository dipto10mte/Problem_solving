#include<stdio.h>
int main()
{
    int a,b,c,i,j,k,n,p,q;
    scanf("%d",&n);
    int x[n];
    for(i=0;i<n;i++)
        scanf("%d",&x[i]);
    for(i=0;i<n;i++)
    {
        c=x[i];
        p=0;
        q=0;
        b=0;
        while(c>0)
        {
            a=c%10;
            q++;
            if(a!=0)
            {
                p++;
            }
            c=c/10;
            b=b*10+a;
        }
        printf("%d\n",p);
        int d[p];
        for(j=0;j<p;j++){
            a=b%10;
            b=b/10;
            if(a!=0){
                for(k=1;k<q;k++)
                    a=a*10;
                d[j]=a;
            }
            else
                j--;
            q--;
        }
        for(j=0;j<p;j++)
            printf("%d ",d[j]);
        printf("\n");
    }
    return 0;
}
