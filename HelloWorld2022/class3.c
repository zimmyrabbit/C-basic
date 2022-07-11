#include <stdio.h>
#define MONTHS 12

int dataType(void) {
	salary();
	intAndChar();
	intChanging();
}

int salary(void) {
	double monthSalary = 1000.5;
	printf("$ %.2f\n", monthSalary * MONTHS);
	return 0;
}

int intAndChar(void) {
	//char x = 'A';
	//int x = 65;
	char x = 65;
	char y = 'A';
	char z = 'B';
	printf("%c\n", x); //A
	printf("%d\n", y); //65
	printf("%c\n", z); //B
	
	return 0;
}

int intChanging(void) {
	int x = 100;
	printf("10진수로 출력 : %d\n", x);
	printf("8진수로 출력 : %o\n", x);
	printf("16진수로 출력 : %x\n", x);

	return 0;
}