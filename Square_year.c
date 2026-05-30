#include<stdio.h>
#include<math.h>
int main()
{
    int i,t,x;
    scanf("%d",&t);
    int y[t];
    for(i=0;i<t;i++)
        scanf("%d",&y[i]);
    for(i=0;i<t;i++){
        x=sqrt(y[i]);
        if(x*x!=y[i])
            printf("-1\n");
        else
            printf("0 %d\n",x);
    }
    return 0;
}
