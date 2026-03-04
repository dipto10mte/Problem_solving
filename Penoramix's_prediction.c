#include<stdio.h>
int main()
{
    int a,b,i,j;
    scanf("%d %d",&a,&b);
    i=b+1;
    if(b%2==0){
        printf("No");
        return 0;
    }
    else if(b==3){
        printf("YES");
        return 0;
    }
    else{
        for(i=a+2;i<b;i+=2){
            for(i=2;i*i<j;i++){
                if(b%i==0){
                    break;
                }
                else{
                    printf("No");
                    return 0;
                }
            }
        }
    }
    printf("YES");
    return 0;
}
