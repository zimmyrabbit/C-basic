#include <stdio.h>

int file_write(void) {

	FILE* fp = NULL;
	
	fp = fopen("output.txt", "w");
	// w -> ������ write
	// r -> �б��� read

	if (fp == NULL) {
		printf("���� ���⿡ �����߽��ϴ�.\n");
	}
	else {
		printf("���� ���⿡ �����߽��ϴ�.\n");
	}

	fputc('H', fp);
	fputc('E', fp);
	fputc('L', fp);
	fputc('L', fp);
	fputc('O', fp);
	fclose(fp);

	return 0;
}

int file_read(void) {

	FILE *fp = NULL;
	int c;

	fp = fopen("input.txt", "r");

	if (fp == NULL) {
		printf("���� ���⿡ �����߽��ϴ�.\n");
	}
	else {
		printf("���� ���⿡ �����߽��ϴ�.\n");
	}

	while ((c = fgetc(fp)) != EOF) {
		putchar(c);
	}

	fclose(fp);
	

	return 0;
}

int file_word_search(void) {

	FILE* fp = NULL;
	char fname[256];
	char buffer[256];
	char word[256];
	int line = 0;

	printf("�����̸��� �Է��ϼ��� : ");
	scanf_s("%s", fname, 256);

	printf("Ž���� �ܾ �Է��ϼ��� : ");
	scanf_s("%s", word, 256);

	if ((fp = fopen(fname, "r")) == NULL) {
		fprintf(stderr, "���� %s�� ���� �� �����ϴ�.", fname);
		return 0;
	}

	while (fgets(buffer, 256, fp)) {
		line++;
		if (strstr(buffer, word)) {
			printf("���� %d : �ܾ� %s�� (��) �߰ߵǾ����ϴ�.\n", line, word);
		}
	}

	fclose(fp);
	
	return 0;
}