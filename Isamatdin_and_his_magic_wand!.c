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
