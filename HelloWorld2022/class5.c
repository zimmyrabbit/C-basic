#include <stdio.h>
#define N 10
#define M 20

int year(void) {
	/*
		윤년 => 4년마다, 그렇지만 100년 단위일 때는 윤년에 해당하지 않도록
		윤년 => 400년 단위일 떄는 어떤 상황이든 간에 윤년으로 설정
	*/

	int year = 2016;
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
		printf("%d년은 윤년입니다.\n", year);
	}
	else {
		printf("%d년은 윤년이 아닙니다.\n", year);
	}

	return 0;
}

int sum(void) {
	int i = 1, sum = 0;
	while (i <= 1000) {
		sum = sum + i;
		i++;
	}

	printf("1부터 1000까지의 합은 %d입니다./n", sum);

	return 0;
}

int square(void) {
	
	int i, j;

	for (i = 0; i < N; i++) {
		for (j = 0; j < N; j++) {
			printf("*");
		}
		printf("\n");
	}
	
	return 0;
}

int piramid(void) {
	int i, j;

	//C언어는 for문안에서 i변수 초기화가 금지되어있다.
	for (i = 0; i < M; i++) {
		for (j = M - i - 1; j > 0; j--) {
			printf(" ");
		}
		for (j = 0; j < i - 1; j++) {
			printf("*");
		}
		for (j = 0; j < i; j++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}