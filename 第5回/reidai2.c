#include <stdio.h>
int main()
{
	int i, a, data[5], max, min;

    int sum = 0;
	double average;
    printf("%d", min);

	printf("５つの整数を入力してください\n");
	for ( i=0 ; i<5 ; i++ )	{
		scanf("%d", &data[i]);
        if (max < data[i]) max = data[i]; //get max
        if (min > data[i]) min = data[i]; //get min
	}
	printf("入力された数：%d,%d,%d,%d,%d \n", data[0], data[1], data[2], data[3], data[4]);
	
    
	for ( i=0 ; i<5 ; i++ ) {
        sum += data[i];
    }
	average = sum / 5.0;

	printf("平均値＝%lf\n",average);
    printf("最小値=%d\n", min);
    printf("最大値=%d\n", max);
	return 0;
}