#include<stdio.h>
int main()
{
    int b=1,c=1,i,n;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=1;i<n;i++){
        if(a[i-1]<a[i]){
            b++;
            if(b>c)
                c=b;
        }
        else
            b=1;
    }
    printf("%d",c);
    return 0;
}
