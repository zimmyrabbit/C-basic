#include <stdio.h>

int arraygugudan(void) {

	int i, j;
	int gugudan[10][10];

	for (i = 1; i < 10; i++) {
		printf("\n [ %d 단 ]\n\n", i);

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
		printf("%d 번째 학생의 수학, 영어 점수 : ", i + 1);
		scanf_s("%d %d", &score[i][0], &score[i][1]);
	}

	for (i = 0; i < 5; i++) {
		total[0] += score[i][0];
		total[1] += score[i][1];
	}

	printf("\n\n5명의 수학점수 합계  : %d", total[0]);
	printf("\n\n5명의 영어점수 합계  : %d", total[1]);
	return 0;
}