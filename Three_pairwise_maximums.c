#include<stdio.h>
int main()
{
    int a[3],i,t;
    scanf("%d",&t);
    int x[3*t];
    for(i=0;i<3*t;i+=3)
        scanf("%d %d %d",&x[i],&x[i+1],&x[i+2]);
    for(i=0;i<3*t;i+=3){
        if(x[i]>x[i+1]&&x[i]>x[i+2]){
            a[0]=x[i];
            if(x[i+1]>x[i+2]){
                a[1]=x[i+1];
                a[2]=x[i+2];
            }
            else{
                a[1]=x[i+2];
                a[2]=x[i+1];
            }
        }
        else if(x[i+1]>x[i+2]){
            a[0]=x[i+1];
            if(x[i]>x[i+2]){
                a[1]=x[i];
                a[2]=x[i+2];
            }
            else{
                a[1]=x[i+2];
                a[2]=x[i];
            }
        }
        else{
            a[0]=x[i+2];
            if(x[i]>x[i+1]){
                a[1]=x[i];
                a[2]=x[i+1];
            }
            else{
                a[1]=x[i+1];
                a[2]=x[i];
            }
        }
        if(a[0]==a[1])
            printf("YES\n%d %d %d\n",a[0],a[2],a[2]);
        else
            printf("NO\n");
    }
    return 0;
}
