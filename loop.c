#include <stdio.h>

int main_loop(void) {
	// for�ݺ���
	/*
	for (int i = 0; i < 10; i++) {
		printf("Hello world %d\n", i);
	}
	*/
	// while�ݺ���
	/*
	int i = 1;
	while (i <= 10) {
		printf("Hello World %d\n", i++);
		// i++;
	}
	*/
	// do while �ݺ���
	/*
	int i = 1;
	do {
		printf("Hello World %d\n", i++);
	} while (i <= 10);
	*/
	// 2�� �ݺ���
	/*
	for (int i = 1; i <= 3; i++) {
		printf("first loop : %d\n", i);
		for (int j = 1; j <= 5; j++) {
			printf("second loop : %d\n", j);
		}
	}
	*/
	// ������
	/*
	for (int i = 2; i < 10; i++) {
		printf("********%d ��*****\n", i);
		for (int j = 1; j < 10; j++) {
			printf("%d x %d = %d\n", i, j, i * j);
			
		}
	}
	*/
	// �� �ױ�
	/*
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}
	for (int i = 0; i < 5; i++) {
		for (int j = i; j < 5 - 1; j++) {
			printf(" ");
		}
		for (int k = 0; k <= i ; k++) {
			printf("*");
		}
		printf("\n");
	}*/
	// �Ƕ�̵� �ױ�
	int floor;
	printf("�� ������ �װڴ���?");
	scanf_s("%d", &floor);
	for (int i = 0; i < floor; i++) {
		for (int j = i; j < floor - 1; j++) {
			printf(" ");
		}
		for (int k = 0; k < 2 * i + 1; k++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}