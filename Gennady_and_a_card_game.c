#include<stdio.h>
int main()
{
    int i,n=0;
    char a[3],b[3];
    scanf("%s",a);
    for(i=0;i<5;i++){
        scanf("%s",b);
        if(a[0]==b[0]||a[1]==b[1])
            n=1;
    }
    if(n)
        printf("YES");
    else
        printf("NO");
    return 0;
}
