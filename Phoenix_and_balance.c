#include<stdio.h>
#include<math.h>
int main()
{
    int b,c,i,j,n,t;
    scanf("%d",&t);
    int a[t];
    for(i=0;i<t;i++){
        scanf("%d",&n);
        b=pow(2,n);
        c=0;
        for(j=1;j<n;j++){
            if(j<n/2)
                b+=pow(2,j);
            else
                c+=pow(2,j);
        }
        a[i]=b-c;
    }
    for(i=0;i<t;i++)
        printf("%d\n",a[i]);
    return 0;
}
