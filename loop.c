#include <stdio.h>

int main_loop(void) {
	// for반복문
	/*
	for (int i = 0; i < 10; i++) {
		printf("Hello world %d\n", i);
	}
	*/
	// while반복문
	/*
	int i = 1;
	while (i <= 10) {
		printf("Hello World %d\n", i++);
		// i++;
	}
	*/
	// do while 반복문
	/*
	int i = 1;
	do {
		printf("Hello World %d\n", i++);
	} while (i <= 10);
	*/
	// 2중 반복문
	/*
	for (int i = 1; i <= 3; i++) {
		printf("first loop : %d\n", i);
		for (int j = 1; j <= 5; j++) {
			printf("second loop : %d\n", j);
		}
	}
	*/
	// 구구단
	/*
	for (int i = 2; i < 10; i++) {
		printf("********%d 단*****\n", i);
		for (int j = 1; j < 10; j++) {
			printf("%d x %d = %d\n", i, j, i * j);
			
		}
	}
	*/
	// 별 쌓기
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
	// 피라미드 쌓기
	int floor;
	printf("몇 층으로 쌓겠느냐?");
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