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

    return 0;
}
