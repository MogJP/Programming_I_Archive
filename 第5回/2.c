#include <stdio.h>

int main() { 
    int a,b;
    printf("input 2 numbers\n");
    scanf("%d", &a);
    scanf("%d", &b);
    if(a>b) {
        int temp = b;
        b = a;
        a = temp;
    }
    printf("a=%d, b=%d", a,b);

    return 0;
}