#include <stdio.h>
int main() {
    int a;
    printf("１以上５以下の整数を⼊⼒してください︓");
    scanf("%d",&a);
    switch(a) {
        case 1:
            printf("1を⼊⼒しました。\n");
            break;
        case 2:
            printf("2を⼊⼒しました。\n");
            break;
        case 3:
            printf("3を⼊⼒しました。\n");
            break;
        case 4:
            printf("4を⼊⼒しました。\n");
            break;
        case 5:
            printf("5を⼊⼒しました。\n");
            break;
    }

    return 0;
}