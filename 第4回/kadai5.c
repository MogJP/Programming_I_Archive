#include <stdio.h>
int main() {
    int a;
    printf("正の整数を入力してください:");
    scanf("%d", &a);

    for (int i=0; i<=9; i++) {
        for (int j=0; j<=9; j++) {
            for (int k=0; k<=9; k++) {
                for (int l=0; l<=9; l++) {
                    if((i-j)*k+l == a) {
                        printf("(%d-%d)*%d+%d\n", i,j,k,l);
                    }
                }
            }
        }
    }
    return 0;
}