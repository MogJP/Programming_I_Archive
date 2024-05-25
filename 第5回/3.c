#include <stdio.h>

int main() {
    //input 5 times
    int input, max, max2;
    for (int i=0; i<5; i++) {
        scanf("%d", &input);
        
        if (max > input) {
            max = input;
        } else if (max2 > input) {
            max2 = input;
        }
    }

    printf("%d", max2);
    return 0;
}