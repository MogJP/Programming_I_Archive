#include <stdio.h>
int main() {
    int an = 2;
    while(1) {
        if (an > 1000) break;
        if (an >= 100 && an <= 1000) {
            printf("%d\n", an);
        }
        an = 3*an -2;
    }
    return 0;
}