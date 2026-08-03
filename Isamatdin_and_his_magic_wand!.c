#include <stdio.h>
#include <stdlib.h>
#include <string.h>


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
