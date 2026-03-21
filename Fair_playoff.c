#include<stdio.h>
int main()
{
    int a,i,j,k,m,n,t,x[4];
    scanf("%d",&t);
    int s[t];
    for(i=0;i<t;i++){
        for(j=0;j<4;j++){
            scanf("%d",&x[i]);
        }
        if(x[0]>x[1])
            m=x[0];
        else
            m=x[1];
        if(x[2]>x[3])
            n=x[2];
        else
            n=x[3];
        for(j=0;j<4;j++){
            for(k=j+1;k<4;k++){
                if(x[j]>x[k]){
                    a=x[j];
                    x[j]=x[k];
                    x[k]=a;
                }
            }
        }
        if(m==x[2]&&n==x[3])
            s[i]=1;
        else if(m==x[3]&&n==x[2])
            s[i]=1;
        else
            s[i]=0;
    }
    for(i=0;i<t;i++){
        if(s[i]==1)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
