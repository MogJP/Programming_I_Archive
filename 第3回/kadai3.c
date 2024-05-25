#include <stdio.h>

int main() {
    int i = 1;
    int sum = 0;

    while (i <= 100) {
        if((i%3 != 0) && (i%5 != 0) && (i%10 >= 6)) {
            sum = sum + i;
        }
        i++;
    }

    printf("和は%dです\n", sum);
}