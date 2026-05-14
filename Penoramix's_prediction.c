#include<stdio.h>
int main()
{
    int a,b,i,j,m,n;
    scanf("%d %d",&a,&b);
    i=b+1;
    if(b%2==0)
        printf("NO");
    else if(a==2){
        if(b==3)
            printf("YES");
        else
            printf("NO");
    }
    else{
        for(i=a+2;i<=b;i+=2){
                n=0;
            for(j=3;j<i;j+=2){
                if(i%j==0)
                    n++;
            }
            if(n==0){
                m=i;
                break;
            }
        }
        if(m==b)
            printf("YES");
        else
            printf("NO");
    }
    return 0;
}
