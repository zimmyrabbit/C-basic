#include <stdio.h>

int arraygugudan(void) {

	int i, j;
	int gugudan[10][10];

	for (i = 1; i < 10; i++) {
		printf("\n [ %d �� ]\n\n", i);

		for (j = 1; j < 10; j++) {
			gugudan[i][j] = i * j;
			printf("%d x %d = %d\n", i, j, gugudan[i][j]);
		}
	}
	return 0;
}

int arrayscore(void) {

	int score[5][2];

	int total[2] = { 0, };

	int i;

	for (i = 0; i < 5; i++) {
		printf("%d ��° �л��� ����, ���� ���� : ", i + 1);
		scanf_s("%d %d", &score[i][0], &score[i][1]);
	}

	for (i = 0; i < 5; i++) {
		total[0] += score[i][0];
		total[1] += score[i][1];
	}

	printf("\n\n5���� �������� �հ�  : %d", total[0]);
	printf("\n\n5���� �������� �հ�  : %d", total[1]);
	return 0;
}