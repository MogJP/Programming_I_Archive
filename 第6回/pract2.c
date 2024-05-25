#include <stdio.h>
int main()
{
    int i,sum=0;
    int n;

    // nに外から値の入力を受け付け、その値の各桁の和を表示するプログラムをかけ
    scanf("%d", &n);
    int a=1;
    for(i=0; i<3; i++) {
      sum += (n%(a*10))/a;
      a=a*10;
    }
    printf("%d", sum);

    return 0;
}