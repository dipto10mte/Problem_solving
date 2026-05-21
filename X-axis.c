#include<stdio.h>
int main()
{
    int a,b,c,d,i,t;
    scanf("%d",&t);
    int x[t];
    for(i=0;i<t;i++){
        scanf("%d %d %d",&a,&b,&c);
        if(a==b&&b==c)
            x[i]=0;
        else if(a==b||b==c||a==c){
            if(b>c)
                x[i]=b-c;
            else if(c>b)
                x[i]=c-b;
            else if(a>b)
                x[i]=a-b;
            else if(b>a)
                x[i]=b-a;
            else if(a>c)
                x[i]=a-c;
            else
                x[i]=c-a;
        }
        else if(a>b&&a>c){
            if(b>c)
                x[i]=a-c;
            else
                x[i]=a-b;
        }
        else if(b>c){
            if(a>c)
                x[i]=b-c;
            else
                x[i]=b-a;
        }
        else{
            if(a>b)
                x[i]=c-b;
            else
                x[i]=c-a;
        }
    }
    for(i=0;i<t;i++)
        printf("%d\n",x[i]);
    return 0;
}
