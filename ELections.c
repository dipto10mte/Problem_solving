#include<stdio.h>
int main()
{
    int i,m,t;
    scanf("%d",&t);
    int a[3*t];

    for(i=0;i<3*t;i+=3)
        printf("%d %d %d\n",a[i],a[i+1],a[i+2]);
    return 0;
}
