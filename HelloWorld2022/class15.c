#include <stdio.h>
#define SIZE 5

struct point {
	int x;
	int y;
};

void comparePoint(struct point p1, struct point p2) {
	if ((p1.x == p1.x) && (p1.y == p2.y)) {
		printf("p1�� p2�� ����.");
	}
}

int comparePoint_main(void) {

	struct point p1;
	struct point p2;

	p1.x = 30;
	p1.y = 10;

	p2.x = 30;
	p2.y = 10;

	//����ü�� ���� ��ü�� ���� �� ����.
	//if (p1 == p2) {
	//	printf("p1�� p2�� �����ϴ�.");
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
		printf("�й��� �Է��ϼ��� : ");
		scanf_s("%d", &list[i].number);

		printf("�̸��� �Է��ϼ��� : ");
		scanf_s("%s", list[i].name, 10);

		printf("������ �Է��ϼ��� : ");
		scanf_s("%lf", &list[i].grade);
	}

	for (i = 0; i < SIZE; i++) {
		printf("�й� : %d, �̸� : %s, ���� : %.1f\n", list[i].number, list[i].name, list[i].grade);
	}

	return 0;
}

