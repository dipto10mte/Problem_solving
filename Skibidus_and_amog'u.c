#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,k=0,m=0,n,t;
    scanf("%d",&t);
    int a[t];
    char w[10],b[10*t];
    for(i=0;i<t;i++){
        scanf("%s",w);
        n=strlen(w);
        w[n-2]='i';
        w[n-1]='\0';
        n=strlen(w);
        m+=n;
        a[i]=n;
        for(j=0;j<n;j++,k++)
            b[k]=w[j];
    }
    for(i=0,j=0,k=0;i<m;i++,k++){
        if(k==a[j]){
            printf("\n");
            j++;
            k=0;
        }
        printf("%c",b[i]);
    }
    return 0;
}
