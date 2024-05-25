#include <stdio.h>

int main() {

    printf("(1)\n");
    int a[10];   
    for (int i=0; i<10; i++) {
        if (i==0) { a[0] = 2; continue; }
        else if (i==1) { a[1] = 6; continue; }
        else { a[i] = a[i-2] + a[i-1]*2 - 3; }
        printf("a(%d)=%d, ", i, a[i]);
    }

    printf("\n(2)\n");
    int b[10];
    b[0] = 0;
    b[1] = 1;
    for (int i=2; i<10; i++) {
        a[i] = a[i-2] + a[i-1];
    }
    for (int i=0; i<10; i++) printf("a(%d)=%d, ", i, a[i]);

    return 0;
}