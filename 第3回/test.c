#include <stdio.h>
int main(){
    int a,sum=0;
    while(1){
        printf("入力してください：\n");
        scanf("%d",&a);
        if(a==0) break;

        sum=sum+a;
        printf("合計：%d\n",sum);

    }
    return 0;
}