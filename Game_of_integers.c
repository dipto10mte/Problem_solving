#include<stdio.h>
int main()
{
    int i,j,n;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if((a[i]+1)%3==0||(a[i]-1)%3==0)
            printf("First");
        else
            printf("Second");
        printf("\n");
    }
    return 0;
}
