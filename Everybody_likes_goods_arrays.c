#include<stdio.h>
int main()
{
    int a,i,j,n,t,x,y;
    scanf("%d",&t);
    int b[t];
    for(i=0;i<t;i++){
        scanf("%d",&n);
        b[i]=0,x=0,y=0;
        for(j=0;j<n;j++){
            scanf("%d",&a);
            if(a%2==1){
                if(y==0)
                    x++;
                else{
                    x++;
                    b[i]+=(y-1);
                    y=0;
                }
            }
            else{
                if(x==0)
                    y++;
                else{
                    y++;
                    b[i]+=(x-1);
                    x=0;
                }
            }
        }
        b[i]+=(x+y-1);
    }
    for(i=0;i<t;i++)
        printf("%d\n",b[i]);
    return 0;
}
