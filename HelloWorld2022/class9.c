#include <stdio.h>
#include <limits.h>
#define NUMBER 5

int array(void) {

	int i, max, min, index;

	int array[NUMBER];
	//array[0] ~ array[4] 총 5개가 들어가는 배열 선언

	max = 0;
	index = 0;

	for (i = 0; i < NUMBER; i++) {
		scanf_s("%d", &array[i]);
		if (max < array[i]) {
			max = array[i];
			index = i;
		}
	}

	printf("가장 큰 값은 %d입니다. 그리고 가장 큰 값은 %d번째 입력하였습니다.", max, index+1);

	min = INT_MAX;

	for (i = 0; i < NUMBER; i++) {
		scanf_s("%d", &array[i]);
		if (min > array[i]) {
			min = array[i];
			index = i;
		}
	}

	printf("가장 작은 값은 %d입니다. 그리고 가장 작은 값은 %d번째 입력하였습니다.", min, index + 1);

	return 0;
}


//5개의 정수 중 짝수 최대값과 홀수 최대값 구하기
int array_2(void) {

	int array[NUMBER];
	int i, oddMax, evenMax;

	oddMax = 0;
	evenMax = 0;

	for (i = 0; i < NUMBER; i++) {
		scanf_s("%d", &array[i]);

		if (array[i] % 2 == 0) {
			if (evenMax < array[i]) {
				evenMax = array[i];
			}
		}
		else if (array[i] % 2 == 1) {
			if (oddMax < array[i]) {
				oddMax = array[i];
			}
		}
	}

	printf("짝수중 가장 큰 값은 %d 홀수중 가장 큰 값은 %d 입니다.", evenMax, oddMax);
	return 0;
}