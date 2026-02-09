#include<Stdio.h>
int main()
{
    int n=0,k,l,r,s;
    scanf("%d %d",&k,&r);
    s=k-r;
    l=k;
    while(++n)
    {
        if(s%10==0||l%10==0)
        {
            printf("%d",n);
            return 0;
        }
        s+=k;
        l+=k;
    }
}
