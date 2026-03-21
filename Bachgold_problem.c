#include<stdio.h>
int main()
{
    int a,b,i,n;
    scanf("%d",&n);
    if(n%2==1){
        b=(n-1)/2;
        printf("%d\n",b);
        for(i=1;i<b;i++)
            printf("2 ");
        printf("3");
    }
    else{
        b=n/2;
        printf("%d\n",b);
        for(i=0;i<b;i++)
            printf("2 ");
    }
    return 0;
}
