#include<stdio.h>
int main()
{
    int r,c,i,j;
    scanf("%d %d",&r,&c);
    for(i=0;i<r;i++)
    {
        if(i%2==0)
        {
            for(j=0;j<c;j++)
            {
                printf("#");

            }
            printf("\n");
        }
        else
        {
            for(j=0;j<c-1;j++)
            {
                printf(".");

            }
            if(j==c-1)
            {
                printf("#");
            }
            printf("\n");
        }
    }
    return 0;
}
