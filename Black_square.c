#include<stdio.h>
#include<string.h>
int main()
{
    int a,b,c,d,i,n=0;
    char x[100001];
    scanf("%d %d %d %d",&a,&b,&c,&d);
    scanf("%s",x);
    for(i=0;i<strlen(x);i++){
        if(x[i]=='1')
            n+=a;
        else if(x[i]=='2')
            n+=b;
        else if(x[i]=='3')
            n+=c;
        else
            n+=d;
    }
    printf("%d",n);
    return 0;
}
