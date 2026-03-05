#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,k,t;
    scanf("%d",&t);
    int n[t];
    for(i=0;i<t;i++)
        scanf("%d",&n[i]);
    for(i=0;i<t;i++){
        if((n[i]/2)%2==1)
            printf("NO\n");
        else{
            printf("YES\n");
            for(j=2,k=0;k<n[i]/2;j+=2,k++)
                printf("%d ",j);
            for(j=1;k<n[i];j+=2,k++){
                if(k==n[i]-1)
                    j+=n[i]/2;
                printf("%d ",j);
            }
            printf("\n");
        }
    }
    return 0;
}
