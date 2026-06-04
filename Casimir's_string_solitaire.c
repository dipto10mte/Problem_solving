#include<stdio.h>
#include<string.h>
int main()
{
    int a,b,c,i,j,t;
    char s[51];
    scanf("%d",&t);
    int d[t];
    for(i=0;i<t;i++){
        scanf("%s",s);
        a=b=c=0;
        for(j=0;j<strlen(s);j++){
            if(s[j]=='A')
                a++;
            else if(s[j]=='B')
                b++;
            else
                c++;
        }
        if(a+c==b)
            d[i]=1;
        else
            d[i]=0;
    }
    for(i=0;i<t;i++){
        if(d[i])
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
