#include<stdio.h>
int main()
{
    //ここに作成せよ
    int input[100], n, max;
    scanf("%d", &n);
    for(int i=0; i<n; i++) {
        scanf("%d", &input[i]);
        if (i==0) {
            max = input[i];
        } else if (input[i] > max) {
           max = input[i];
        } 
    }
    printf("%d\n", max);

    return 0;
}