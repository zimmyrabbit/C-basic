#include <stdio.h>
#include <limits.h>

int overflow(void) {

	int x = INT_MAX;
	printf("int���� �ִ� x�� %d �Դϴ�.\n", x);
	printf("x + 1�� %d �Դϴ�./n", x + 1); //overflow
	return 0;
}