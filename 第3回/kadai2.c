#include <stdio.h>

int main() {
    int a_n = 3;
    int counter = 0;

    while(a_n <= 10000) {
        a_n = a_n * 2 - 1;
        counter++;
    }
    printf("値:%d, 数列の最初を0番として%d番⽬\n", a_n, counter);
}