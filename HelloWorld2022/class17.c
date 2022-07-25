#include <stdio.h>
//�����޸� �Ҵ��� ���� �߰��ؾ��ϴ� ���̺귯��
#include <stdlib.h>

int DynamicAllocation1(void) {
	int* pi; //Pointer Integer

	pi = (int*)malloc(sizeof(int)); //malloc = �޸𸮸� �Ҵ��ض�. 

	if (pi == NULL) {
		printf("�����޸� �Ҵ翡 �����߽��ϴ�.\n");
		exit(1);
	}

	*pi = 100;
	printf("%d\n", *pi);
	// ���� �޸� ����� ���Ŀ��� ������ �ش� �޸𸮸� ��ȯ�Ѵ�

	free(pi); //�Ҵ� ����

	return 0;
}

int DynamicAllocation2(void) {

	char* pc = NULL;
	int i = 0;
	pc = (char*)malloc(100*sizeof(char));

	if (pc == NULL) {
		printf("���� �޸� �Ҵ翡 �����߽��ϴ�.\n");
		exit(1);
	}

	//pc�� ����Ű�� �����͸� 1�� ������Ű�� ���ĺ� �ҹ��ڸ� �����Ѵ�.

	for (i = 0; i < 26; i++) {
		*(pc + i) = 'a' + i;
	}

	//�ƽ�Ű �ڵ忡�� 0 �� NULL�� �ǹ��Ѵ�.
	*(pc + i) = 0;

	printf("%s\n", pc);
	free(pc);

	return 0;
}

int DynamicAllocation3(void) {

	int* pi, i;
	pi = (int*)malloc(5 * sizeof(int));

	if (pi == NULL) {
		printf("���� �޸� �Ҵ翡 �����߽��ϴ�.\n");
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