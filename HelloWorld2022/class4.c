#include <stdio.h>
#include <math.h> //pow(), abs()
#define SECOND_PER_MINUTE 60

int operator(void) {

	getSecond();
	plusPlus();
	complicated();
	relations();
	logic();
	condition();
	powtest();

	return 0;
}

int getSecond(void) {
	int input = 1000;
	int minute = input / SECOND_PER_MINUTE;
	int second = input % SECOND_PER_MINUTE;

	printf("%d초는 %d분 %d초 입니다.\n", input, minute, second);

	return 0;
}

//증감연산자
int plusPlus(void) {
	int x = 0;
	printf("현재의 x는 %d입니다.\n", x);
	x++;
	printf("현재의 x는 %d입니다.\n", x);
	printf("현재의 x는 %d입니다.\n", x--);
	printf("현재의 x는 %d입니다.\n", x);
	printf("현재의 x는 %d입니다.\n", --x);

	return 0;
}

//복합연산자
int complicated(void) {
	int x = 100;
	printf("현재의 x값은 %d 입니다.\n", x);
	x += 50; // x = x + 50;
	printf("현재의 x값은 %d 입니다.\n", x);
	x -= 50; // x = x - 50;
	printf("현재의 x값은 %d 입니다.\n", x);
	x *= 50; // x = x * 50;
	printf("현재의 x값은 %d 입니다.\n", x);
	x /= 50; // x = x / 50;
	printf("현재의 x값은 %d 입니다.\n", x);
	x %= 50; // x = x % 50;
	printf("현재의 x값은 %d 입니다.\n", x);

	return 0;
}

//관계연산자
int relations(void) {
	int x = 50;
	int y = 30;

	printf("x가 y와 같은가? %d\n", x == y); //0(false)
	printf("x가 y와 다른가? %d\n", x != y); //1(true)
	printf("x가 y보다 큰가? %d\n", x > y); 
	printf("x가 y보다 작은가? %d\n", x < y); 
	printf("x에 y값을 넣는다면? %d\n", x = y);

	if (x == y) {
		
	}
	else {

	}

	return 0;
}

//논리연산자
int logic(void) {
	int x = 50, y = 30;
	printf("x가 y보다 크고 y는 40미만인가? %d\n", (x > y) && (y < 40));
	printf("x가 y보다 작거나 혹은 y는 30인가? %d\n", (x < y) || (y == 40));
	printf("x가 50이 아닌가? %d\n", (x != 50));

	return 0;
}

//조건 연산자
int condition(void) {
	int x = 50, y = 30;
	int absoluteX = (x > 0) ? x : -x; //절댓값
	int max = (x > y) ? x : y;
	int min = (x < y) ? x : y;

	printf("x의 절댓값은 %d입니다\n", absoluteX);
	printf("x,y 중 최대값은 %d입니다.\n", max);
	printf("x,y 중 최소값은 %d입니다.\n", min);

	return 0;
}

int powtest(void) {

	double x = pow(2.0, 20.0);
	printf("2의 20제곱은 %.0f입니다.\n", x);

	return 0;
}