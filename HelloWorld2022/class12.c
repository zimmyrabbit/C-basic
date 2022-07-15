#include <stdio.h>
#include <string.h>

int countchar(void) {

	char input[1001];

	gets(input);

	int count = 0;

	// \0 문자열이 끝나는 null 값을 의미한다
	while (input[count] != '\0') {
		count++;
	}

	printf("입력한 문자열의 길이는 %d 입니다./n", count);
	printf("입력한 문자열 : %s", input);

	return 0;
}

int strlen_str(void) {

	char input[5] = "Love";

	printf("문자열의길이 : %d\n", strlen(input));

	return 0;
}

int strcmp_str(void) {

	char inputOne[5] = "A";

	char inputTwo[5] = "B";

	printf("문자열 비교 : %d\n", strcmp(inputOne, inputTwo));

	// strcmp(a,b) - 문자열 사전적 순서 비교 함수
	// a,b 에 입력된 문자가 사전적으로 비교했을때
	// 동일하면 0
	// 왼쪽이 사전적으로 앞에 있다면 -1
	// 오른쪽이 사전적으로 앞에있다면 1

	return 0;
}

int strcpy_str(void) {

	char input[10] = "I Love You";
	char result[5] = "Love";

	strcpy(result, input);
	printf("문자열 복사 : %s\n", result);

	// strcpy(a,b)
	// -> a에 b의 문자를 복사해서 입력한다
	// 포인터를 다루는 함수이기 떄문에 입력 가능 범위를 벗어나더라도 문자열을 입력해줌

	// result[5] 에 input[10] 의 text를 넣어줌
	// 하지만 result[5] 의 크기에 I Love You 라는 문자를 넣게 해주는 함수 

	return 0;
}