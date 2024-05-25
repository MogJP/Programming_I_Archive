//問題5
#include <stdio.h>
int main() {
	int input[5];
	int sum = 0;
	for(int i=0; i<5; i++) {
		printf("%dつ目の整数を入力してください", i+1);
		scanf("%d", &input[i]);
		sum += input[i];
	}
	
	double avg = sum/5.0;
	printf("平均値は %lf です。\n", avg);
	
	printf("平均値以上の数:");
	for(int i=0; i<5; i++) {
		if(input[i] >= avg) printf("%d ", input[i]);
	}
	printf("\n");

	printf("平均値より小さい数:");
	for(int i=0; i<5; i++) {
		if(input[i] < avg) printf("%d ", input[i]);
	}
	printf("\n");
	
	return 0;
}