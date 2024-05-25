#include <stdio.h>
int main() {
    int a,b,c;
    int n=0;
    printf("input first integer: ");
    scanf("%d", &a);
    printf("input second integer: ");
    scanf("%d", &b);
    printf("input third integer: ");
    scanf("%d", &c);

    for (; a<=b; a++) {
        if (c%a == 0) {
            n++;
        }
    }
    printf("約数は%d個", n);
    return 0;
}