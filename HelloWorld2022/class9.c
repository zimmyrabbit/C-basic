#include <stdio.h>
#include <limits.h>
#define NUMBER 5

int array(void) {

	int i, max, min, index;

	int array[NUMBER];
	//array[0] ~ array[4] �� 5���� ���� �迭 ����

	max = 0;
	index = 0;

	for (i = 0; i < NUMBER; i++) {
		scanf_s("%d", &array[i]);
		if (max < array[i]) {
			max = array[i];
			index = i;
		}
	}

	printf("���� ū ���� %d�Դϴ�. �׸��� ���� ū ���� %d��° �Է��Ͽ����ϴ�.", max, index+1);

	min = INT_MAX;

	for (i = 0; i < NUMBER; i++) {
		scanf_s("%d", &array[i]);
		if (min > array[i]) {
			min = array[i];
			index = i;
		}
	}

	printf("���� ���� ���� %d�Դϴ�. �׸��� ���� ���� ���� %d��° �Է��Ͽ����ϴ�.", min, index + 1);

	return 0;
}


//5���� ���� �� ¦�� �ִ밪�� Ȧ�� �ִ밪 ���ϱ�
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

	printf("¦���� ���� ū ���� %d Ȧ���� ���� ū ���� %d �Դϴ�.", evenMax, oddMax);
	return 0;
}