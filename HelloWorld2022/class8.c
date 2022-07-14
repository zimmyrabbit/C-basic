#include <stdio.h>

//�ݺ��Լ��� �̿��� ���� �Ƕ�̵� ���
// �ݺ��Լ� -> for, while

int print(int a) {
	int i, j;

	for (i = 0; i < a; i++) {
		for (j = 0; j <= i; j++) {
			printf("%d", j + 1);
		}
		printf("\n");
	}
}

int printmain(void) {
	int a;
	scanf_s("%d", &a);
	print(a);
	return 0;
}


//����Լ��� �̿��� �ݺ� ���
//Recursive Function
void print_Rf(int count) {
	if (count == 0) {
		return;
	}
	else {
		printf("���ڿ��� ����մϴ�.\n");
		print_Rf(count - 1);
	}
}

int print_Rfmain(void) {
	int number;
	printf("���ڿ��� � ����ұ��?");
	scanf_s("%d", &number);
	print_Rf(number);

	return 0;
}

//����Լ��� ����(nCr) ����
int nCr(int n, int r) {
	if (r == 0 || r == n) {
		return 1;
	}
	else {
		return nCr(n - 1, r - 1) + nCr(n - 1, r);
	}
}

int nCrmain(void) {
	int n, r;
	printf("nCr ������ �Է����ּ���.\n");
	scanf_s("%d %d", &n, &r);

	printf("%d", nCr(n, r));

	return 0;
}







