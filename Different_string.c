#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,k=0,t;
    char c,s[11],r[10001];
    scanf("%d",&t);
    int a[t];
    for(i=0;i<t;i++){
        scanf("%s",s);
        a[i]=0;
        for(j=1;j<strlen(s);j++){
            if(s[j-1]!=s[j]){
                a[i]=strlen(s);
                c=s[j-1];
                s[j-1]=s[j];
                s[j]=c;
                break;
            }
        }
        if(a[i]){
            for(j=0;j<strlen(s);j++,k++)
                r[k]=s[j];
        }
    }
    k=0;
    for(i=0;i<t;i++){
        if(a[i]>0){
            printf("YES\n");
            for(j=0;j<a[i];j++,k++)
                printf("%c",r[k]);
            printf("\n");
        }
        else
            printf("NO\n");
    }
    return 0;
}
