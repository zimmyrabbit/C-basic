#include <stdio.h>

//scanf_s 함수를 사용할때 변수이름 앞에 주소를 지정하는 &를 붙여야한다.
//형식지정자를 %c로 하면 enter입력도 하나의 문자로 입력받을 수 있다.
// -> getchar() 로 버퍼 초기화

int calculator(void) {
	char o;
	int x, y;

	while (1) {
		printf("수식을 입력하세요 : ");
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
			printf("입력이 잘못되었습니다.");
		}

		//버퍼 초기화
		getchar();

		printf("프로그램을 종료하시겠습니까? (y/n)");

		scanf_s("%c", &o, 1);

		if (o == 'y' || o == 'Y') {
			break;
		}
		else if (o == 'n' || o == 'N') {
			continue;
		}
		else {
			printf("입력이 잘못되었습니다.");
		}

	}
	return 0;
}

int calculator2(void) {

	int number, x, i, sum = 0;

	printf("정수의 개수를 입력하세요 : ");
	scanf_s("%d", &number);

	for (i = 0; i < number; i++) {
		printf("정수의 값을 입력하세요");
		scanf_s("%d", &x);
		sum += x;
	}

	printf("현재 정수의 값은 %d 입니다.\n", sum);

	return 0;
}

int gugudan(void) {

	int x, i;

	printf("정수를 입력하세요 : ");
	scanf_s("%d", &x);

	for (i = 1; i < 10; i++) {
		printf("%d X %d = %d\n", x, i, x * i);
	}

	return 0;
}