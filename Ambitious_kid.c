#include<stdio.h>
int main()
{
    int i,m,n,o=100000;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&m);
        if(m<0)
            m=-m;
        if(m<o)
            o=m;
    }
    printf("%d",o);
    return 0;
}
