// i=1, k=0
// 
// 1~2 2回
// k+=1
// 
// (a) k=3
// 
// 135: 3
// (b) k = 1 + 3+5 = 9
// 
// 128 64 32 16
// (c) k=16
// 
//  1,2
// 	1,2,3
//  6回
// (d) k = 6
// 
// 1,2,3,4,5
// 	k%3
// 		1: case0 -> k=1
// 		2: case1 -> k=11
// 		3: default -> k=111
// 		4: case0 -> k=112
// 		5: case1 -> k=122
// 
// (f) k=12


//問題2
#include <stdio.h>

int main() {
	for (int i=1; i<=1000; i++) {
		if(i%3==0) printf("%d\n", i);
	}

	return 0;
}


//問題3
#include <stdio.h>

int main() {
	int an=1;
	int n=1;
	while(1) {
		if(an>1000) break;
		an = 2*an+1;
		n+=1;
	}	
	printf("%d", n);
	
	return 0;
}


//問題4
#include <stdio.h>
int main() {
	for(int i=1; i<=100; i++) {
		if(i%5==0) {
			printf("&&&\n");
			continue;
		}
		if(i%3==0) printf("*");
		printf("%d", i);
		if(i%4==0) printf("!");
		printf("\n");
	}

	return 0;
}