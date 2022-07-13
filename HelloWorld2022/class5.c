#include <stdio.h>
#define N 10
#define M 20

int year(void) {
	/*
		���� => 4�⸶��, �׷����� 100�� ������ ���� ���⿡ �ش����� �ʵ���
		���� => 400�� ������ ���� � ��Ȳ�̵� ���� �������� ����
	*/

	int year = 2016;
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
		printf("%d���� �����Դϴ�.\n", year);
	}
	else {
		printf("%d���� ������ �ƴմϴ�.\n", year);
	}

	return 0;
}

int sum(void) {
	int i = 1, sum = 0;
	while (i <= 1000) {
		sum = sum + i;
		i++;
	}

	printf("1���� 1000������ ���� %d�Դϴ�./n", sum);

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

	//C���� for���ȿ��� i���� �ʱ�ȭ�� �����Ǿ��ִ�.
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