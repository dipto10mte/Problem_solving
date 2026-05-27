#include<stdio.h>
int main()
{
    int a,b,c,d,i,t;
    scanf("%d",&t);
    int e[t];
    for(i=0;i<t;i++){
        scanf("%d %d %d %d",&a,&b,&c,&d);
        e[i]=0;
        if(b==d){
            if(a>c)
                e[i]=a-c;
            else if(a==c)
                e[i]=0;
            else
                e[i]=-1;
        }
        else if(c-a>d-b||b>d)
            e[i]=-1;
        else{
            while(b!=d){
                a++;
                b++;
                e[i]++;
            }
            e[i]+=(a-c);
        }
    }
    for(i=0;i<t;i++)
        printf("%d\n",e[i]);
    return 0;
}
