#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    if(scanf("%d",&n)!=1)
        return 1;
    int a[105];
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    int min_diff=abs(a[0]-a[n-1]);
    int idx1=1;
    int idx2=n;
    for(int i=0;i<n-1;i++){
        int diff=abs(a[i]-a[i+1]);
        if(diff<min_diff){
            min_diff=diff;
            idx1=i+1;
            idx2=i+2;
        }
    }
    printf("%d %d\n",idx1,idx2);
    return 0;
}
