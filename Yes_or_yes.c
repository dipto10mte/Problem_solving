#include<stdio.h>
int main()
{
    int i,j,n;
    char si[3];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        char si[3];
        scanf("%s",si);
        for(j=0;j<3;j++)
        {
            if(si[j]>96)
            {
                si[j]=si[j]-32;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        if(si[0]=='Y'&&si[1]=='E'&&si[2]++'S')
        {
            printf("YES");
        }
        else
        {
            printf("NO");
        }
        printf("\n");
    }
    return 0;
}
