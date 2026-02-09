#include<stdio.h>
int main()
{
    int i=1,k,n;
    scanf("%d %d",&n,&k);
    k=240-k;
    for(i=0;i<n;i++)
    {
        k-=(i+1)*5;
        if(k<0)
        {
            break;
        }
    }
    printf("%d",i);
    return 0;
}
