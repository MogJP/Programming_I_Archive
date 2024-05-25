#include <stdio.h>
int main() {
    int n = 0;
    int sum = 0;
    
    while(sum <= 1000) {
        n++;
        sum = sum + n;
    }
    printf("%dを足したとき、初めて1000を超えました。\n", n);
}