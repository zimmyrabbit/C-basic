#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

struct student {
	int number;
	char name[10];
	double grade;
};

int student_1(void) {

	struct student s;

	s.number = 20150001;
	strcpy_s(s.name,10, "ȫ�浿");
	s.grade = 4.5;

	printf("�й� : %d\n", s.number);
	printf("���� : %s\n", s.name);
	printf("���� : %.1f\n", s.grade);

	return 0;
}


int studend_2(void) {

	struct student s;

	printf("�й��� �Է��ϼ��� : ");
	scanf_s("%d", &s.number);
	printf("�̸��� �Է��ϼ��� : ");
	scanf_s("%s", s.name, 10);
	printf("������ �Է��ϼ��� : ");
	scanf_s("%lf", &s.grade);

	printf("�й� : %d\n", s.number);
	printf("���� : %s\n", s.name);
	printf("���� : %.1f\n", s.grade);

	return 0;
}

struct point {
	int x;
	int y;
};

int dot_distance(void) {
	struct point p1, p2;
	int xDiff, yDiff;
	double distance;

	printf("1�� ���� ��ǥ�� �Է��ϼ���");
	scanf_s("%d %d", &p1.x, &p1.y);

	printf("2�� ���� ��ǥ�� �Է��ϼ���");
	scanf_s("%d %d", &p2.x, &p2.y);

	xDiff = p1.x - p2.x;
	yDiff = p1.y - p2.y;

	distance = sqrt(xDiff * xDiff + yDiff * yDiff);

	printf("�� �� ������ �Ÿ��� %f �Դϴ�.", distance);

	return 0;
}