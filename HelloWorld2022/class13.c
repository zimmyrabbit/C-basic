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
	strcpy_s(s.name,10, "홍길동");
	s.grade = 4.5;

	printf("학번 : %d\n", s.number);
	printf("성명 : %s\n", s.name);
	printf("학점 : %.1f\n", s.grade);

	return 0;
}


int studend_2(void) {

	struct student s;

	printf("학번을 입력하세요 : ");
	scanf_s("%d", &s.number);
	printf("이름을 입력하세요 : ");
	scanf_s("%s", s.name, 10);
	printf("학점을 입력하세요 : ");
	scanf_s("%lf", &s.grade);

	printf("학번 : %d\n", s.number);
	printf("성명 : %s\n", s.name);
	printf("학점 : %.1f\n", s.grade);

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

	printf("1번 점의 좌표를 입력하세요");
	scanf_s("%d %d", &p1.x, &p1.y);

	printf("2번 점의 좌표를 입력하세요");
	scanf_s("%d %d", &p2.x, &p2.y);

	xDiff = p1.x - p2.x;
	yDiff = p1.y - p2.y;

	distance = sqrt(xDiff * xDiff + yDiff * yDiff);

	printf("두 점 사이의 거리는 %f 입니다.", distance);

	return 0;
}