#include<stdio.h>
int main()
{
    //ここに作成せよ
    int input[100], n;
    scanf("%d", &n);
    for(int i=0; i<n; i++) {
        scanf("%d", &input[i]);
    }
    for(int i=0; i<n; i++) {
        printf("%d ", input[i]);
    }

    return 0;
}