#include <stdio.h>

int main() {
    //input 1
    int length;
    printf("要素数:");
    scanf("%d", &length);
    
    //input 2
    int a[20];
    for(int i=0; i<length; i++) {
        printf("数列_%d項:", i);
        scanf("%d", &a[i]);
    }

    //output
    for (int i=length-1; i>=0; i--) { printf("%d ", a[i]); }

    return 0;
}