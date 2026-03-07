#include<stdio.h>
int main()
{
    int a,b,c,i,t;
    scanf("%d",&t);
    int x[t];
    for(i=0;i<t;i++){
        scanf("%d %d %d",&a,&b,&c);
        if(a>b+c)
            x[i]=1;
        else if(b>a+c)
            x[i]=0;
        else if((a+b+c)%2==1)
            x[i]=1;
        else
            x[i]=0;
    }
    for(i=0;i<t;i++){
        if(x[i]==1)
            printf("First\n");
        else
            printf("Second\n");
    }
    return 0;
}
