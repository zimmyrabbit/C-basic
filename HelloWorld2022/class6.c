#include <stdio.h>

int calculator(void) {
	char o;
	int x, y;

	while (1) {
		printf("������ �Է��ϼ��� : ");
		scanf_s("%d %c %d", &x, &o, 1, &y);
		if (o == '+') {
			printf("%d %c %d = %d\n", x, o, y, x + y);
		}
		else if (o == '-') {
			printf("%d %c %d = %d\n", x, o, y, x - y);
		}
		else if (o == '*') {
			printf("%d %c %d = %d\n", x, o, y, x * y);
		}
		else if (o == '/') {
			printf("%d %c %d = %d\n", x, o, y, x / y);
		}
		else if (o == '%') {
			printf("%d %c %d = %d\n", x, o, y, x % y);
		}
		else {
			printf("�Է��� �߸��Ǿ����ϴ�.");
		}

		//���� �ʱ�ȭ
		getchar();

		printf("���α׷��� �����Ͻðڽ��ϱ�? (y/n)");

		scanf_s("%c", &o, 1);

		if (o == 'y' || o == 'Y') {
			break;
		}
		else if (o == 'n' || o == 'N') {
			continue;
		}
		else {
			printf("�Է��� �߸��Ǿ����ϴ�.");
		}

	}
	return 0;
}

int calculator2(void) {

	int number, x, i, sum = 0;

	printf("������ ������ �Է��ϼ��� : ");
	scanf_s("%d", &number);

	for (i = 0; i < number; i++) {
		printf("������ ���� �Է��ϼ���");
		scanf_s("%d", &x);
		sum += x;
	}

	printf("���� ������ ���� %d �Դϴ�.\n", sum);

	return 0;
}

int gugudan(void) {

	int x, i;

	printf("������ �Է��ϼ��� : ");
	scanf_s("%d", &x);

	for (i = 1; i < 10; i++) {
		printf("%d X %d = %d\n", x, i, x * i);
	}

	return 0;
}