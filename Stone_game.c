#include <stdio.h>
int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        int a[105];
        int min_idx = 0, max_idx = 0;
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
            if (a[i] < a[min_idx]) min_idx = i;
            if (a[i] > a[max_idx]) max_idx = i;
        }
        int L = min_idx, R = max_idx;
        if (L > R) {
            int tmp = L; L = R; R = tmp;
        }
        int both_left = R + 1;
        int both_right = n - L;
        int split = (L + 1) + (n - R);
        int ans = both_left;
        if (both_right < ans) ans = both_right;
        if (split    < ans) ans = split;
        printf("%d\n", ans);
    }
    return 0;
}
