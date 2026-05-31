#include<stdio.h>
int main()
{
    int a,b,c,i,m,n,t;
    scanf("%d",&t);
    int d[t];
    for(i=0;i<t;i++){
        scanf("%d %d %d",&a,&b,&c);
        d[i]=0;
        if(b>a){
            a+=b;
            b=a-b;
            a-=b;
        }
        while(a-b>2*c){
            a-=c;
            b+=c;
            d[i]++;
        }
        if(a!=b)
            d[i]++;
    }
    for(i=0;i<t;i++)
        printf("%d\n",d[i]);
    return 0;
}
