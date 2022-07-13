#include <stdio.h>

//어셈블리어 : 기계어와 일대일 대응이되는 컴퓨터의 저급 언어


/*
	시간 계산 함수
*/

//전역변수
int hour;
int minute;
int minuteAdd;

void counter() {
	minute += minuteAdd;
	hour += minute / 60;
	minute %= 60;
	hour %= 24;
	return minute;
}


int timeCal(void) {

	printf("시를 입력하세요 : ");
	scanf_s("%d", &hour);

	printf("분을 입력하세요 : ");
	scanf_s("%d", &minute);

	printf("더할 분을 입력하세요 : ");
	scanf_s("%d", &minuteAdd);

	counter();

	printf("더해진 시간은 %d시 %d분 입니다", hour, minute);

	return 0;
}




/*
	특정한 금액을 받아서 가장 적은 거스름 화폐의 개수를 구하는 함수
*/
int smallest(int number) {
	int count = 0;
	while (number >= 50000) {
		number -= 50000;
		count++;
	}
	while (number >= 10000) {
		number -= 10000;
		count++;
	}
	while (number >= 5000) {
		number -= 5000;
		count++;
	}
	while (number >= 1000) {
		number -= 1000;
		count++;
	}
	while (number >= 500) {
		number -= 500;
		count++;
	}
	while (number >= 100) {
		number -= 100;
		count++;
	}
	while (number >= 50) {
		number -= 50;
		count++;
	}
	while (number >= 10) {
		number -= 10;
		count++;
	}

	return count;
}


int moneyCnt(void) {

	int number;
	printf("금액을 입력해 주세요 : ");
	scanf_s("%d", &number);

	printf("최소로 줄 수 있는 화폐의 개수는 %d개 입니다.", smallest(number));

	return 0;
}




/*
	1월 1일부터 현재의 날짜 까지 날짜 차이 구하는 함수
*/
int getDays(int month, int day) {
	int i, sum = 0;
	for (i = 1; i < month; i++) {
		if (i == 2) {
			sum += 28; //윤년 계산 안함
		}
		else if (i % 2 == 0) {
			sum += 30;
		}
		else if (i % 2 == 1) {
			sum += 31;
		}
	}

	return sum + day;
}


int daysCnt(void) {

	int month, day;

	printf("날짜를 입력해 주세요 : ");
	scanf_s("%d %d", &month, &day);
	printf("1월1일부터 입력한 날짜까지의 차이 일수는 %d일 입니다.", getDays(month, day));

	return 0;
}