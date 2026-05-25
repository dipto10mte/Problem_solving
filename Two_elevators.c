#include<stdio.h>
int main()
{
    int a,b,c,i,t;
    scanf("%d",&t);
    int d[t];
    for(i=0;i<t;i++){
        scanf("%d %d %d",&a,&b,&c);
        if(b<c){
            if(a<2*c-b)
                d[i]=1;
            else if(a>2*c-b)
                d[i]=2;
            else
                d[i]=3;
        }
        else{
            if(a<b)
                d[i]=1;
            else if(a>b)
                d[i]=2;
            else
                d[i]=3;
        }
    }
    for(i=0;i<t;i++)
        printf("%d\n",d[i]);
    return 0;
}
