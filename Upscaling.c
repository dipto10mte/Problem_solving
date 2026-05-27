#include<stdio.h>
int main()
{
    int i,j,k,t;
    scanf("%d",&t);
    int n[t];
    for(i=0;i<t;i++)
        scanf("%d",&n[i]);
    for(i=0;i<t;i++){
        for(j=0;j<n[i];j++){
            if(j%2==0){
                for(k=0;k<n[i];k++){
                    if(k%2==0)
                        printf("##");
                    else
                        printf("..");
                }
                printf("\n");
                for(k=0;k<n[i];k++){
                    if(k%2==0)
                        printf("##");
                    else
                        printf("..");
                }
                printf("\n");
            }
            else{
                for(k=0;k<n[i];k++){
                    if(k%2==0)
                        printf("..");
                    else
                        printf("##");
                }
                printf("\n");
                for(k=0;k<n[i];k++){
                    if(k%2==0)
                        printf("..");
                    else
                        printf("##");
                }
                printf("\n");
            }

        }
    }
    return 0;
}
