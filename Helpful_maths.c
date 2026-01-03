#include<stdio.h>
#include<string.h>
int main()
{
    char a[101],b[101];
    int c,d,i,j;
    scanf("%s",&a);
    c=strlen(a);
    for(i=1;i<c;i+2)
    {
        b[i]=a[i];
    }
    for(i=0;i<c;i+2)
    {
        d=0;
        for(j=0;j<c;j+2)
        {
            if(a[i]>b[j])
            {
                d++;
            }
        }
        if(d=0)
        {
            b[i]=a[i];
        }
    }
    printf("%s",b);
    return 0;
}
