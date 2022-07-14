#include <stdio.h>

//반복함수를 이용해 숫자 피라미드 출력
// 반복함수 -> for, while

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


//재귀함수를 이용해 반복 출력
//Recursive Function
void print_Rf(int count) {
	if (count == 0) {
		return;
	}
	else {
		printf("문자열을 출력합니다.\n");
		print_Rf(count - 1);
	}
}

int print_Rfmain(void) {
	int number;
	printf("문자열을 몇개 출력할까요?");
	scanf_s("%d", &number);
	print_Rf(number);

	return 0;
}

//재귀함수로 조합(nCr) 구현
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
	printf("nCr 조합을 입력해주세요.\n");
	scanf_s("%d %d", &n, &r);

	printf("%d", nCr(n, r));

	return 0;
}







