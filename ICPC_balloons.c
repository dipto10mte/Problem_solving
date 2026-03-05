#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,k,m,n,t;
    scanf("%d",&t);
    int a[t];
    for(i=0;i<t;i++){
        a[i]=0;
        scanf("%d",&n);
        char b[n];
        scanf("%s",b);
        for(j=0;j<strlen(b);j++){
            m=0;
            for(k=0;k<j;k++){
                if(b[j]==b[k])
                    m++;
            }
            if(m==0)
                a[i]+=2;
            else
                a[i]+=1;
        }

    }
    for(i=0;i<t;i++)
        printf("%d\n",a[i]);
    return 0;
}
