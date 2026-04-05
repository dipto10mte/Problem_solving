#include<stdio.h>
int main()
{
    int a,b,c,i,n,t;
    scanf("%d",&t);
    int x[t];
    for(i=0;i<t;i++){
        scanf("%d %d %d",&a,&b,&c);
        n=5;
        while(n--){
            if(a<b&&a<c)
                a++;
            else if(b<c)
                b++;
            else
                c++;
        }
        x[i]=a*b*c;
    }
    for(i=0;i<t;i++)
        printf("%d\n",x[i]);
    return 0;
}
