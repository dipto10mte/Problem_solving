#include<stdio.h>
int main()
{
    int i,j,k,n,x=0,y=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0,j=0,k=n-1;i<n;i++){
        if(i%2==0)
        {
            if(a[j]>a[k]){
                x+=a[j];
                j++;
            }
            else{
                x+=a[k];
                k--;
            }
        }
        else
        {
            if(a[j]>a[k]){
                y+=a[j];
                j++;
            }
            else{
                y+=a[k];
                k--;
            }
        }

    }
    printf("%d %d",x,y);
    return 0;
}
