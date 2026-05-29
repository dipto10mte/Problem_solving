#include<stdio.h>
int main()
{
    int i,j,n,t;
    scanf("%d",&t);
    int a[t];
    for(i=0;i<t;i++)
        scanf("%d",&a[i]);
    for(i=0;i<t;i++){
        for(j=0;j<a[i];j++)
            printf("%d ",j+1);
        printf("\n");
    }
    return 0;
}
