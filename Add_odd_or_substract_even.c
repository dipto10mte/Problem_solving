#include<stdio.h>
int main()
{
    int a,b,i,t;
    scanf("%d",&t);
    int c[t];
    for(i=0;i<t;i++){
        scanf("%d %d",&a,&b);
        if(a==b)
            c[i]=0;
        else if((a%2==1&&b%2==1)||(a%2==0&&b%2==0)){
            if(b>a)
                c[i]=2;
            else
                c[i]=1;
        }
        else{
            if(b>a)
                c[i]=1;
            else
                c[i]=2;
        }
    }
    for(i=0;i<t;i++)
        printf("%d\n",c[i]);
    return 0;
}
