#include <stdio.h>

//������� : ����� �ϴ��� �����̵Ǵ� ��ǻ���� ���� ���


/*
	�ð� ��� �Լ�
*/

//��������
int hour;
int minute;
int minuteAdd;

void counter() {
	minute += minuteAdd;
	hour += minute / 60;
	minute %= 60;
	hour %= 24;
	return minute;
}


int timeCal(void) {

	printf("�ø� �Է��ϼ��� : ");
	scanf_s("%d", &hour);

	printf("���� �Է��ϼ��� : ");
	scanf_s("%d", &minute);

	printf("���� ���� �Է��ϼ��� : ");
	scanf_s("%d", &minuteAdd);

	counter();

	printf("������ �ð��� %d�� %d�� �Դϴ�", hour, minute);

	return 0;
}




/*
	Ư���� �ݾ��� �޾Ƽ� ���� ���� �Ž��� ȭ���� ������ ���ϴ� �Լ�
*/
int smallest(int number) {
	int count = 0;
	while (number >= 50000) {
		number -= 50000;
		count++;
	}
	while (number >= 10000) {
		number -= 10000;
		count++;
	}
	while (number >= 5000) {
		number -= 5000;
		count++;
	}
	while (number >= 1000) {
		number -= 1000;
		count++;
	}
	while (number >= 500) {
		number -= 500;
		count++;
	}
	while (number >= 100) {
		number -= 100;
		count++;
	}
	while (number >= 50) {
		number -= 50;
		count++;
	}
	while (number >= 10) {
		number -= 10;
		count++;
	}

	return count;
}


int moneyCnt(void) {

	int number;
	printf("�ݾ��� �Է��� �ּ��� : ");
	scanf_s("%d", &number);

	printf("�ּҷ� �� �� �ִ� ȭ���� ������ %d�� �Դϴ�.", smallest(number));

	return 0;
}




/*
	1�� 1�Ϻ��� ������ ��¥ ���� ��¥ ���� ���ϴ� �Լ�
*/
int getDays(int month, int day) {
	int i, sum = 0;
	for (i = 1; i < month; i++) {
		if (i == 2) {
			sum += 28; //���� ��� ����
		}
		else if (i % 2 == 0) {
			sum += 30;
		}
		else if (i % 2 == 1) {
			sum += 31;
		}
	}

	return sum + day;
}


int daysCnt(void) {

	int month, day;

	printf("��¥�� �Է��� �ּ��� : ");
	scanf_s("%d %d", &month, &day);
	printf("1��1�Ϻ��� �Է��� ��¥������ ���� �ϼ��� %d�� �Դϴ�.", getDays(month, day));

	return 0;
}