#include<stdio.h>
int main()
{
    int i,k,n,t,x;
    scanf("%d",&t);
    int a[3*t];
    for(i=0;i<3*t;i+=3){
        scanf("%d %d %d",&n,&k,&x);
        if(x!=1){
            a[i]=0;
            a[i+1]=n;
            a[i+2]=1;
        }
        else if(n%2==0&&k>1){
            a[i]=0;
            a[i+1]=n/2;
            a[i+2]=2;
        }
        else if(n%2==1&&k>2){
            a[i]=3;
            a[i+1]=n/2-1;
            a[i+2]=2;
        }
        else{
            a[i]=0;
            a[i+1]=0;
            a[i+2]=0;
        }
    }
    for(i=0;i<3*t;i+=3){
        if(a[i+2]==0)
            printf("No\n");
        else{
            printf("Yes\n");
            if(a[i]==0){
                printf("%d\n",a[i+1]);
                while(a[i+1]--)
                    printf("%d ",a[i+2]);
                printf("\n");
            }
            else{
                printf("%d\n",a[i+2]+1);
                printf("%d ",a[i]);
                while(a[i+1]--)
                    printf("%d ",a[i+2]);
                printf("\n");
            }
        }
    }
    return 0;
}
