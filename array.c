#include <stdio.h>

int main_array2(void) {

	// array
	/*
	int subway_array[3];
	subway_array[0] = 30;
	subway_array[1] = 40;
	subway_array[2] = 50;
	for (int i = 0; i < 3; i++) {
		printf("지하철 %d차에 %d 명이 타고 있습니다,\n", i + 1, subway_array[i]);
	}*/
	// 값은 초기화를 반드시 해야 함
	/*
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	for (int i = 0; i < 10; i++) {
		printf("%d\n", arr[i]);
	}
	
	int arr[10] = { 1, 2 };
	for (int i = 0; i < 10; i++) {
		printf("%d\n", arr[i]);
	}
	*/
	// 문자 vs 문자열
	// 문자열 끝에는 끝을 의미하는 NULL문자가 포함되어야 함
	char str[] = "coding";
	for (int i = 0; i < sizeof(str); i++) {
		printf("%c\n", str[i]);
	}
	
	return 0;
}