#include <stdio.h>

int main() {
    int input_original;
    int input;
    printf("input integer:");
    scanf("%d", &input_original);

    //init
    input = input_original;
    int n_ten = 1;
    int current_digit = 0;
    int amari = 0;
    int sum = 0;
    int break_flag = 0;

    for(int i=0; i<100000; i++) {
        while(amari != input) {
            amari = (input % (n_ten*10));
            current_digit = amari / n_ten;
            n_ten = n_ten * 10;
            sum += current_digit * current_digit;
            printf("current_digit: %d, sum: %d\n", current_digit, sum);
        }

        if (sum == 1) {
            printf("Happy Number");
            break_flag = 1;
            break;
        } else if (sum == input_original) {
            printf("Unhappy Number");
            break_flag = 1;
            break;
        } else {
            //reset (continue to next for)
            input = sum;
            sum = 0;
            amari = 0;
            n_ten = 1;
        }

        if(break_flag == 1) break;
    }
}