#include <stdio.h>

int main() {
    int a;
    printf("1以上12以下の整数を⼊⼒してください︓"); 
    scanf("%d",&a);
    switch(a) {
        case 2:
            printf("28または29日\n");
            break;
        case 4: case 6: case 9: case 11:
            printf("30日\n");
            break;
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            printf("31日\n");
            break;
        default:
            printf("無効な文字です\n");
            break;
    }

    return 0;
}