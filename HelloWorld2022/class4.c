#include <stdio.h>
#include <math.h> //pow(), abs()
#define SECOND_PER_MINUTE 60

int operator(void) {

	getSecond();
	plusPlus();
	complicated();
	relations();
	logic();
	condition();
	powtest();

	return 0;
}

int getSecond(void) {
	int input = 1000;
	int minute = input / SECOND_PER_MINUTE;
	int second = input % SECOND_PER_MINUTE;

	printf("%d�ʴ� %d�� %d�� �Դϴ�.\n", input, minute, second);

	return 0;
}

//����������
int plusPlus(void) {
	int x = 0;
	printf("������ x�� %d�Դϴ�.\n", x);
	x++;
	printf("������ x�� %d�Դϴ�.\n", x);
	printf("������ x�� %d�Դϴ�.\n", x--);
	printf("������ x�� %d�Դϴ�.\n", x);
	printf("������ x�� %d�Դϴ�.\n", --x);

	return 0;
}

//���տ�����
int complicated(void) {
	int x = 100;
	printf("������ x���� %d �Դϴ�.\n", x);
	x += 50; // x = x + 50;
	printf("������ x���� %d �Դϴ�.\n", x);
	x -= 50; // x = x - 50;
	printf("������ x���� %d �Դϴ�.\n", x);
	x *= 50; // x = x * 50;
	printf("������ x���� %d �Դϴ�.\n", x);
	x /= 50; // x = x / 50;
	printf("������ x���� %d �Դϴ�.\n", x);
	x %= 50; // x = x % 50;
	printf("������ x���� %d �Դϴ�.\n", x);

	return 0;
}

//���迬����
int relations(void) {
	int x = 50;
	int y = 30;

	printf("x�� y�� ������? %d\n", x == y); //0(false)
	printf("x�� y�� �ٸ���? %d\n", x != y); //1(true)
	printf("x�� y���� ū��? %d\n", x > y); 
	printf("x�� y���� ������? %d\n", x < y); 
	printf("x�� y���� �ִ´ٸ�? %d\n", x = y);

	if (x == y) {
		
	}
	else {

	}

	return 0;
}

//��������
int logic(void) {
	int x = 50, y = 30;
	printf("x�� y���� ũ�� y�� 40�̸��ΰ�? %d\n", (x > y) && (y < 40));
	printf("x�� y���� �۰ų� Ȥ�� y�� 30�ΰ�? %d\n", (x < y) || (y == 40));
	printf("x�� 50�� �ƴѰ�? %d\n", (x != 50));

	return 0;
}

//���� ������
int condition(void) {
	int x = 50, y = 30;
	int absoluteX = (x > 0) ? x : -x; //����
	int max = (x > y) ? x : y;
	int min = (x < y) ? x : y;

	printf("x�� ������ %d�Դϴ�\n", absoluteX);
	printf("x,y �� �ִ밪�� %d�Դϴ�.\n", max);
	printf("x,y �� �ּҰ��� %d�Դϴ�.\n", min);

	return 0;
}

int powtest(void) {

	double x = pow(2.0, 20.0);
	printf("2�� 20������ %.0f�Դϴ�.\n", x);

	return 0;
}