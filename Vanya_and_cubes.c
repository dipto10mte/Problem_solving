#include<stdio.h>
int main()
{
    int i=1,j=1,m=1,n;
    scanf("%d",&n);
    while(1){
        m++;
        i+=m;
        j=i+j;
        if(j>n){
            break;
        }
    }
    printf("%d",--m);
    return 0;
}
