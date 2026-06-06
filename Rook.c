#include<stdio.h>
int main()
{
    int i,j,t;
    scanf("%d",&t);
    int a[t];
    char b[t];
    for(i=0;i<t;i++)
        scanf(" %c%d",&b[i],&a[i]);
    for(i=0;i<t;i++){
        for(j=97;j<105;j++){
            if(j==b[i])
                continue;
            printf("%c%d\n",j,a[i]);
        }
        for(j=1;j<9;j++){
            if(j==a[i])
                continue;
            printf("%c%d\n",b[i],j);
        }
    }
    return 0;
}
