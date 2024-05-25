#include <stdio.h>

int main() {
    //create normal number sequence
    int a[33];
    a[0] = 2;
    a[1] = -1;
    for (int i=2; i<33; i++) { a[i] = -1 * a[i-1] + a[i-2] + 2; }

    //output
    int sum=0;
    for (int i=0; i<33; i++) {
        if(i%4 == 0) sum += a[i];
    }
    printf("%d", sum);

    return 0;
}