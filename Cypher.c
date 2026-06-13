#include <stdio.h>
#include <string.h>
int main() {
    int t;
    scanf("%d", &t);
    int n[105];
    int a[105][105];
    int b[105][105];
    char moves[105][105][15];
    for (int tc = 0; tc < t; tc++) {
        scanf("%d", &n[tc]);
        for (int i = 0; i < n[tc]; i++) scanf("%d", &a[tc][i]);
        for (int i = 0; i < n[tc]; i++) scanf("%d %s", &b[tc][i], moves[tc][i]);
    }
    for (int tc = 0; tc < t; tc++) {
        for (int i = 0; i < n[tc]; i++) {
            int digit = a[tc][i];
            for (int j = 0; j < b[tc][i]; j++) {
                if
                    (moves[tc][i][j] == 'U') digit = (digit - 1 + 10) % 10;
                else
                    digit = (digit + 1) % 10;
            }
            printf("%d", digit);
            if (i < n[tc] - 1) printf(" ");
        }
        printf("\n");
    }
    return 0;
}
