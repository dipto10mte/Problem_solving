#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUF_SZ (1 << 25)

static char ibuf[BUF_SZ];
static int ipos = 0, ilen = 0;

static inline int gc(void) {
    if (ipos == ilen) {
        ilen = (int)fread(ibuf, 1, BUF_SZ, stdin);
        ipos = 0;
        if (ilen == 0) return -1;
    }
    return ibuf[ipos++];
}

static inline long long readLL(void) {
    int c = gc();
    while (c == ' ' || c == '\n' || c == '\r' || c == '\t') c = gc();
    int neg = 0;
    if (c == '-') { neg = 1; c = gc(); }
    long long x = 0;
    while (c >= '0' && c <= '9') {
        x = x * 10 + (c - '0');
        c = gc();
    }
    return neg ? -x : x;
}

static char obuf[BUF_SZ];
static int opos = 0;

static inline void flushOut(void) {
    fwrite(obuf, 1, opos, stdout);
    opos = 0;
}

static inline void writeLL(long long x, char sep) {
    if (opos > BUF_SZ - 32) flushOut();
    if (x == 0) {
        obuf[opos++] = '0';
    } else {
        char tmp[24];
        int tl = 0;
        unsigned long long ux = (unsigned long long)x;
        if (x < 0) { obuf[opos++] = '-'; ux = (unsigned long long)(-x); }
        while (ux > 0) { tmp[tl++] = (char)('0' + ux % 10); ux /= 10; }
        while (tl > 0) obuf[opos++] = tmp[--tl];
    }
    obuf[opos++] = sep;
}

#define MAXN 200005
static long long a[MAXN];
static long long tmp[MAXN];

static void mergeSort(long long *arr, int n) {
    for (int width = 1; width < n; width *= 2) {
        for (int i = 0; i < n; i += 2 * width) {
            int left = i;
            int mid = i + width < n ? i + width : n;
            int right = i + 2 * width < n ? i + 2 * width : n;
            int p = left, q = mid, k = left;
            while (p < mid && q < right) {
                if (arr[p] <= arr[q]) tmp[k++] = arr[p++];
                else tmp[k++] = arr[q++];
            }
            while (p < mid) tmp[k++] = arr[p++];
            while (q < right) tmp[k++] = arr[q++];
        }
        memcpy(arr, tmp, sizeof(long long) * n);
    }
}

int main() {
    long long t = readLL();
    while (t--) {
        int n = (int)readLL();
        int hasEven = 0, hasOdd = 0;
        for (int i = 0; i < n; i++) {
            a[i] = readLL();
            if (a[i] & 1) hasOdd = 1; else hasEven = 1;
        }
        if (hasEven && hasOdd) {
            mergeSort(a, n);
        }
        for (int i = 0; i < n; i++) {
            writeLL(a[i], i + 1 == n ? '\n' : ' ');
        }
    }
    flushOut();
    return 0;
}
