#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,m=0,t;
    char b[10001],c[101];
    scanf("%d",&t);
    int a[t];
    for(i=0;i<t;i++){
        scanf("%s",c);
        a[i]=strlen(c);
        j=a[i];
        while(j--){
            if(c[j]=='p')
                b[m]='q';
            else if(c[j]=='q')
                b[m]='p';
            else
                b[m]=c[j];
            m++;
        }
    }
    m=0;
    for(i=0;i<t;i++)
    {
        for(j=0;j<a[i];j++,m++)
            printf("%c", b[m]);
        printf("\n");
    }
    return 0;
}

