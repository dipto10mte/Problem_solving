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
            if((i+1)%4==0)
            {
                printf("#");
                for(j=1;j<c;j++)
                {
                    printf(".");

                }
                printf("\n");

            }
            else
            {
                for(j=0;j<c-1;j++)
                {
                    printf(".");

                }
                printf("#");
                printf("\n");
            }
        }
    }
    return 0;
}
