#include <stdio.h>
//동적메모리 할당을 위해 추가해야하는 라이브러리
#include <stdlib.h>

int DynamicAllocation1(void) {
	int* pi; //Pointer Integer

	pi = (int*)malloc(sizeof(int)); //malloc = 메모리를 할당해라. 

	if (pi == NULL) {
		printf("동적메모리 할당에 실패했습니다.\n");
		exit(1);
	}

	*pi = 100;
	printf("%d\n", *pi);
	// 동적 메모리 사용한 이후에는 무조건 해당 메모리를 반환한다

	free(pi); //할당 해제

	return 0;
}

int DynamicAllocation2(void) {

	char* pc = NULL;
	int i = 0;
	pc = (char*)malloc(100*sizeof(char));

	if (pc == NULL) {
		printf("동적 메모리 할당에 실패했습니다.\n");
		exit(1);
	}

	//pc가 가르키는 포인터를 1씩 증가시키며 알파벳 소문자를 삽입한다.

	for (i = 0; i < 26; i++) {
		*(pc + i) = 'a' + i;
	}

	//아스키 코드에서 0 은 NULL을 의미한다.
	*(pc + i) = 0;

	printf("%s\n", pc);
	free(pc);

	return 0;
}

int DynamicAllocation3(void) {

	int* pi, i;
	pi = (int*)malloc(5 * sizeof(int));

	if (pi == NULL) {
		printf("동적 메모리 할당에 실패했습니다.\n");
		exit(1);
	}

	pi[0] = 100;
	pi[1] = 200;
	pi[2] = 300;
	pi[3] = 400;
	pi[4] = 500;

	for (i = 0; i < 5; i++) {
		printf("%d\n", *(pi + i));
	}

	free(pi);

	return 0;
}