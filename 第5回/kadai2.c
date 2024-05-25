#include <stdio.h>

int main() {
    int a[31];
    a[0] = 2;
    a[1] = -1;

    for(int i=2; i<=30; i++) {
        a[i] = -1 * a[i-1] + a[i-2] + 2;
    }

    printf("a[30]: %d", a[30]);

    return 0;
}