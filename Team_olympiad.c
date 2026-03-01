#include<stdio.h>
int main()
{
    int i,j,n,w,x=0,y=0,z=0;
    scanf("%d",&n);
    int a[n],b[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(a[i]==1){
            x++;
            b[x*3-3]=i+1;
        }
        else if(a[i]==2){
            y++;
            b[y*3-2]=i+1;
        }
        else{
            z++;
            b[z*3-1]=i+1;
        }
    }
    if(x<y&&x<z)
        w=x;
    else if(y<z)
        w=y;
    else
        w=z;
    printf("%d\n",w);
    for(i=0,j=0;i<w;i++,j+=3){
        printf("%d %d %d\n",b[j],b[j+1],b[j+2]);
    }
    return 0;
}
