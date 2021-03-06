#include <stdio.h>

int file_write(void) {

	FILE* fp = NULL;
	
	fp = fopen("output.txt", "w");
	// w -> 쓰기모드 write
	// r -> 읽기모드 read

	if (fp == NULL) {
		printf("파일 열기에 실패했습니다.\n");
	}
	else {
		printf("파일 열기에 성공했습니다.\n");
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
		printf("파일 열기에 실패했습니다.\n");
	}
	else {
		printf("파일 열기에 성공했습니다.\n");
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

	printf("파일이름을 입력하세요 : ");
	scanf_s("%s", fname, 256);

	printf("탐색할 단어를 입력하세요 : ");
	scanf_s("%s", word, 256);

	if ((fp = fopen(fname, "r")) == NULL) {
		fprintf(stderr, "파일 %s를 읽을 수 없습니다.", fname);
		return 0;
	}

	while (fgets(buffer, 256, fp)) {
		line++;
		if (strstr(buffer, word)) {
			printf("라인 %d : 단어 %s이 (가) 발견되었습니다.\n", line, word);
		}
	}

	fclose(fp);
	
	return 0;
}