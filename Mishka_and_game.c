#include<stdio.h>
int main()
{
    int a,b,i,n,p=0,q=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d %d",&a,&b);
        if(a>b)
            p++;
        else if(b>a)
            q++;
    }
    if(p>q)
        printf("Mishka");
    else if(q>p)
        printf("Chris");
    else
        printf("Friendship is magic!^^");
    return 0;
}
