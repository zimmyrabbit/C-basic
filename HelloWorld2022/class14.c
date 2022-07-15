#include <stdio.h>
#include <math.h>

struct point {
	int x;
	int y;
};

struct rect {
	struct point p1;
	struct point p2;
};

int rect_main(void) {
	struct rect r;
	int w, h, area, peri;

	printf("���� ����� ��ǥ�� �Է��ϼ��� : ");
	scanf_s("%d %d", &r.p1.x, &r.p1.y);

	printf("������ �ϴ��� ��ǥ�� �Է��ϼ��� : ");
	scanf_s("%d %d", &r.p2.x, &r.p2.y);

	w = abs(r.p2.x - r.p1.x);
	h = abs(r.p2.y - r.p1.y);

	area = w * h;
	peri = 2 * w + 2 * h;

	printf("�簢���� ���̴� %d\n", area);
	printf("�簢���� �ѷ��� %d\n", peri);

}