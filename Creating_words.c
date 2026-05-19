#include<stdio.h>
int main()
{
    int i,j,t;
    scanf("%d",&t);
    char a[t*6+1];
    for(i=0,j=0;j<t;i+=6,j++)
        scanf(" %c %c %c %c %c %c",&a[i],&a[i+1],&a[i+2],&a[i+3],&a[i+4],&a[i+5]);
    for(i=0,j=0;j<t;i+=6,j++)
        printf("%c%c%c %c%c%c\n",a[i+3],a[i+1],a[i+2],a[i],a[i+4],a[i+5]);
    return 0;
}
