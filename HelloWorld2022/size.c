#include <stdio.h>

int size(void)
{
	int x;
	x = 5;
	//printf("%d", x);
	printf("변수 x의 메모리 크기는 %d입니다.", sizeof(x)); //4byte
	return 0;
}