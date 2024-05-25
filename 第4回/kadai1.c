#include <stdio.h>
int main() {
    int a,b;
    int sum=0;
    printf("入力データ1:");
    scanf("%d", &a);
    printf("入力データ2:");
    scanf("%d", &b);
    // make a>b
    if (a>b) {
        int temp = a;
        a = b;
        b = temp;
    }

    for(; a<=b; a++) {
        sum += a;
    }
    printf("%d", sum);

    return 0;
}