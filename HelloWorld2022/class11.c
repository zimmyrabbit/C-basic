#include <stdio.h>

// 포인터
//특정 데이터가 저장된 메모리(RAM)의 주소를 저장하는 변수
//주소 그 자체를 가리키기 떄문에 이를 응용해 다양한 연산 수행 가능
//프로그램의 어떠한 위치에서 시행되더라도 특정주소를 그대로 이용하기 때문에 값이 즉시 변경된다.

// &x -> '&'가 x의 주소를 의미한다.
// int *y = &x;
// -> x의 주소를 (*)포인터 y가 가리킨다.


//두 변수의 값 서로 변환하는 포인터 함수
int swap(int *x, int *y) {
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}

//int swap(int x, int y) {
//	int temp;
//	temp = x;
//	x = y;
//	y = temp;
//}

// -> 이런식으로 포인터를 지정해주지 않고 변수로 swap을 하면
//		swap함수 안에서만 변경이 되어 main함수 에는 값이 변환되지 않은 채로 출력된다.

int swapmain(void) {

	int x = 1;
	int y = 2;

	swap(&x, &y);

	printf("x의 값은 : %d\n y의 값은 : %d\n", x, y);

	return 0;
}


//포인터 변수의 값을 바꿔보기
int pointermain(void) {
	int i = 10; //변수 i 선언
	int* p; //포인터 p 선언

	p = &i; //변수 i의 메모리 주소값 p에 대입
	printf("i = %d\n", i);
	*p = 20; //변수 i의 메모리주소의 변수값에 20 대입
	printf("i = %d\n", i);
	return 0;
}