#include <stdio.h>
int main() {
    int t;
    scanf("%d",&t);
    int n[1005],k[1005],p[1005];
    for (int tc=0;tc<t;tc++)
        scanf("%d %d %d",&n[tc],&k[tc],&p[tc]);
    for (int tc=0;tc<t;tc++) {
        int maxSum=n[tc]*p[tc];
        int absK=k[tc]<0?-k[tc]:k[tc];
        if (absK > maxSum)
            printf("-1\n");
        else
            printf("%d\n",(absK+p[tc]-1)/p[tc]);
    }
    return 0;
}
