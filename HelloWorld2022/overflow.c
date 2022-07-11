#include <stdio.h>
#include <limits.h>

int overflow(void) {

	int x = INT_MAX;
	printf("int형의 최댓값 x는 %d 입니다.\n", x);
	printf("x + 1은 %d 입니다./n", x + 1); //overflow
	return 0;
}