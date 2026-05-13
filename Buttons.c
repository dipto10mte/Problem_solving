#include<stdio.h>
int main()
{
    int a,b,c,i,t;
    scanf("%d",&t);
    int x[t];
    for(i=0;i<t;i++){
        scanf("%d %d %d",&a,&b,&c);
        a=a+c/2;
        b=b+c/2;
        if(c%2==1)
            a++;
        if(b>=a)
            x[i]=0;
        else
            x[i]=1;
    }
    for(i=0;i<t;i++){
        if(x[i]==1)
            printf("First\n");
        else
            printf("Second\n");
    }
    return 0;
}
