#include<stdio.h>
int main()
{
    int i,n;
    char a[]={'l','o','v','e','\0'};
    char b[]={'h','a','t','e','\0'};
    scanf("%d",&n);
    printf("I ");
    for(i=0;i<n;i++)
    {
        if(i>0)
        {
            printf("I ");
        }
        if(i%2==0)
        {
            printf("%s ",b);
            if(i<n-1)
            {
                printf("that ");
            }
        }
        else
        {
            printf("%s ",a);
            if(i<n-1)
            {
                printf("that ");
            }
        }
    }
    printf("it");
    return 0;
}
