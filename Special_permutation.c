#include<stdio.h>
int main()
{
    int i,j,t;
    scanf("%d",&t);
    int a[t];
    for(i=0;i<t;i++)
        scanf("%d",&a[i]);
    for(i=0;i<t;i++){
        for(j=0;j<a[i]-1;j++)
            printf("%d ",j+2);
        printf("1\n");
    }
    return 0;
}
