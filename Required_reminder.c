#include<stdio.h>
int main()
{
    int i,n,t,x,y;
    scanf("%d",&t);
    int a[t];
    for(i=0;i<t;i++){
        scanf("%d %d %d",&x,&y,&n);
        while(1){
            if(n%x==y){
                a[i]=n;
                break;
            }
            n--;
        }
    }
    for(i=0;i<t;i++)
        printf("%d\n",a[i]);
    return 0;
}
