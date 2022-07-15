#include <stdio.h>
#define SIZE 5

struct point {
	int x;
	int y;
};

void comparePoint(struct point p1, struct point p2) {
	if ((p1.x == p1.x) && (p1.y == p2.y)) {
		printf("p1과 p2가 같다.");
	}
}

int comparePoint_main(void) {

	struct point p1;
	struct point p2;

	p1.x = 30;
	p1.y = 10;

	p2.x = 30;
	p2.y = 10;

	//구조체의 변수 자체를 비교할 수 없다.
	//if (p1 == p2) {
	//	printf("p1과 p2가 같습니다.");
	//}

	//comperePoint(p1, p2);

	return 0;
}






struct student {
	int number;
	char name[20];
	double grade;
};

int main(void) {

	struct student list[SIZE];

	int i;

	for (i = 0; i < SIZE; i++) {
		printf("학번을 입력하세요 : ");
		scanf_s("%d", &list[i].number);

		printf("이름을 입력하세요 : ");
		scanf_s("%s", list[i].name, 10);

		printf("학점을 입력하세요 : ");
		scanf_s("%lf", &list[i].grade);
	}

	for (i = 0; i < SIZE; i++) {
		printf("학번 : %d, 이름 : %s, 학점 : %.1f\n", list[i].number, list[i].name, list[i].grade);
	}

	return 0;
}

