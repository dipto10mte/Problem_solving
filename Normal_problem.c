#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,m=0,t;
    char b[10000],c[100];
    scanf("%d",&t);
    int a[t];
    for(i=0;i<t;i++){
        scanf("%s",c);
        a[i]=strlen(c);
        for(j=0;j<a[i];j++,m++){
            if(c[j]=='p')
                b[m]='q';
            else if(c[j]=='q')
                b[m]='p';
            else
                b[m]=c[j];
        }
    }
    m=0;
    for(i=0;i<t;i++){
        for(j=0;j<a[i];j++,m++)
            printf("%c",b[m]);
        printf("\n");
    }
    return 0;
}

