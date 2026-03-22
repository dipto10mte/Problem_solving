#include<stdio.h>
int main()
{
    int a=0,i,j,m,n;
    char x;
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf(" %c",&x);
            if(x=='C'||x=='M'||x=='y')
                a++;
        }
    }
    if(a>0)
        printf("#Color");
    else
        printf("#Black&White");
    return 0;
}
