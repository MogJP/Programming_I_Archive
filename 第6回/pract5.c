#include<stdio.h>
int main()
{
    //ここに作成せよ
    int input[100], n, max;
    scanf("%d", &n);
    for(int i=0; i<n; i++) {
        scanf("%d", &input[i]);
    }
    
    int gusu = 0;
    for(int i=0; i<n; i++) {
      if(input[i]%2 == 0) gusu++;
    }
    printf("%d\n", gusu);

    return 0;
}