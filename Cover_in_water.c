#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,n,t,x,y;
    scanf("%d",&t);
    int a[t];
    for(i=0;i<t;i++){
        scanf("%d",&n);
        char b[n];
        scanf("%s",b);
        x=0,y=0;
        for(j=0;j<strlen(b);j++){
            if(b[j]=='.'){
                x++;
                y++;
            }
            else{
                if(y>2){
                    a[i]=2;
                    break;
                }
                y=0;
            }
            a[i]=x;
        }
    }
    for(i=0;i<t;i++)
        printf("%d\n",a[i]);
    return 0;
}
