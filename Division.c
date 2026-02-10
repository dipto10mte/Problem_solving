#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        if(a[i]>=1900)
            printf("Division 1");
        else if(a[i]>=1600)
            printf("Division 2");
        else if(a[i]>=1400)
            printf("Division 3");
        else
            printf("Division 4");
        printf("\n");
    }
    return 0;
}
