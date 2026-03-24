#include<stdio.h>
#include<string.h>
int main()
{
    /*int i,t;
    scanf("%d",&t);
    int a[t];
    char w[10*t];
    for(i=0;i<t;i++){
        scanf("%s",w);
        n=strlen(w);
        w[n-2]='i';
        w[n-1]='\0';
    }
    printf("%s",w);*/
    char a,b;
    scanf("%c %c",&a,&b);
    printf("%c",a+b);
    return 0;
}
