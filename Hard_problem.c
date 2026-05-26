#include<stdio.h>
int main()
{
    int a,b,c,i,m,t;
    scanf("%d",&t);
    int d[t];
    for(i=0;i<t;i++){
        scanf("%d %d %d %d",&m,&a,&b,&c);
        d[i]=0;
        if(m>a){
            if(m-a<c){
                d[i]+=m;
                c-=(m-a);
            }
            else{
                d[i]+=(a+c);
                c=0;
            }
        }
        else
            d[i]+=m;
        if(m>b){
            if(m-b<c)
                d[i]+=m;
            else
                d[i]+=(b+c);
        }
        else
            d[i]+=m;
    }
    for(i=0;i<t;i++)
        printf("%d\n",d[i]);
    return 0;
}
