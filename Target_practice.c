#include<stdio.h>
int main()
{
    int i,j,k,t,x;
    char a[10][10];
    scanf("%d",&t);
    int y[t];
    for(i=0;i<t;i++){
        y[i]=0;
        for(j=0;j<10;j++){
            for(k=0;k<10;k++){
                scanf(" %c",&a[j][k]);
                if(a[j][k]=='X'){
                    if((j==4||j==5)&&(k==4||k==5))
                        y[i]+=5;
                    else if(j>2&&j<7&&k>2&&k<7)
                        y[i]+=4;
                    else if(j>1&&j<8&&k>1&&k<8)
                        y[i]+=3;
                    else if(j>0&&j<9&&k>0&&k<9)
                        y[i]+=2;
                    else
                        y[i]++;
                }
            }
        }
    }
    for(i=0;i<t;i++)
        printf("%d\n",y[i]);
    return 0;
}
