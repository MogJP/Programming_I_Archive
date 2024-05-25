#include <stdio.h>
int main() {
    int birth;
    printf("生年月日を以下の形式で入力してください。例:0303:");
    //scanf("%d", &birth);
    int a,b;
    printf("test");
    scanf("%d", &a);
    scanf("%d", &b);

    if(birth >= 321 && birth <= 419) printf("牡羊座\n");
    else if(birth >= 420 && birth <= 520) printf("牡牛座\n");
    else if(birth >= 521 && birth <= 621) printf("双子座\n");
    else if(birth >= 622 && birth <= 722) printf("蟹座\n");
    else if(birth >= 723 && birth <= 822) printf("獅子座\n");
    else if(birth >= 823 && birth <= 922) printf("乙女座\n");
    else if(birth >= 923 && birth <= 1023) printf("天秤座\n");
    else if(birth >= 1024 && birth <= 1122) printf("蠍座\n");
    else if(birth >= 1123 && birth <= 1221) printf("射手座\n");
    else if((birth >= 1222 && birth <= 1231) || (birth >= 101 && birth <= 119)) printf("山羊座\n");
    else if(birth >= 120 && birth <= 218) printf("水瓶座\n");
    else if(birth >= 219 && birth <= 320) printf("魚座\n");
    else printf("error\n");

    return 0;
}