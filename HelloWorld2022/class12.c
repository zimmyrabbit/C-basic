#include <stdio.h>
#include <string.h>

int countchar(void) {

	char input[1001];

	gets(input);

	int count = 0;

	// \0 ���ڿ��� ������ null ���� �ǹ��Ѵ�
	while (input[count] != '\0') {
		count++;
	}

	printf("�Է��� ���ڿ��� ���̴� %d �Դϴ�./n", count);
	printf("�Է��� ���ڿ� : %s", input);

	return 0;
}

int strlen_str(void) {

	char input[5] = "Love";

	printf("���ڿ��Ǳ��� : %d\n", strlen(input));

	return 0;
}

int strcmp_str(void) {

	char inputOne[5] = "A";

	char inputTwo[5] = "B";

	printf("���ڿ� �� : %d\n", strcmp(inputOne, inputTwo));

	// strcmp(a,b) - ���ڿ� ������ ���� �� �Լ�
	// a,b �� �Էµ� ���ڰ� ���������� ��������
	// �����ϸ� 0
	// ������ ���������� �տ� �ִٸ� -1
	// �������� ���������� �տ��ִٸ� 1

	return 0;
}

int strcpy_str(void) {

	char input[10] = "I Love You";
	char result[5] = "Love";

	strcpy(result, input);
	printf("���ڿ� ���� : %s\n", result);

	// strcpy(a,b)
	// -> a�� b�� ���ڸ� �����ؼ� �Է��Ѵ�
	// �����͸� �ٷ�� �Լ��̱� ������ �Է� ���� ������ ������� ���ڿ��� �Է�����

	// result[5] �� input[10] �� text�� �־���
	// ������ result[5] �� ũ�⿡ I Love You ��� ���ڸ� �ְ� ���ִ� �Լ� 

	return 0;
}