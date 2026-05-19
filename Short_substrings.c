#include<stdio.h>
#include<string.h>

int main()
{
    int i,j,k,t;
    char b[101],c[100001];
    scanf("%d",&t);
    int a[t];

    for(i=0,k=0;i<t;i++){
        scanf("%s",b);
        a[i]=strlen(b);
        for(j=0;j<a[i];j+=2,k++)
            c[k]=b[j];
        c[k++]=b[j-1];
        a[i]=a[i]/2+1;
    }

    for(i=0,k=0;i<t;i++){
        for(j=0;j<a[i];j++,k++)
            printf("%c",c[k]);
        printf("\n");
    }

    return 0;
}
