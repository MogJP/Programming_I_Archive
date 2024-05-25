#include <stdio.h>

int main() {
    // 9i = top 2
    //input 5 times
    int min=101, min_index=1, min2=101, min2_index=1;
    for (int i=0; i<10; i++) {
        printf("%d人目の点数:", i+1);
        int input;
        scanf("%d", &input);
        
        if (min > input) {
            //shift min to min2
            min2 = min;
            min2_index = min_index;

            //update min1
            min = input;
            min_index = i+1;
        } else if (min2 > input) {
            min2 = input;
            min2_index = i+1;
        }
    }

    //output
    printf("9位: %d人目", min2_index);

    return 0;
}