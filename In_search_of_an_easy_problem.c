#include<stdio.h>
int main()
{
    int i,n,a;
    char x[101];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a);
        if(a==1)
        {
            printf("Hard");
            return 0;
        }
    }
    printf("Easy");
    return 0;
}
