#include <stdio.h>

// 선언
void p(int num);
int function_return();

int main_function(void) {
	/*
	// calculator
	int num = 2;
	// printf("num is %d.\n", num);
	p(num);
	num = num + 3;
	// printf("num is %d\n", num);
	p(num);
	num -= 1;
	// printf("num is %d\n", num);
	p(num);
	num *= 3;
	// printf("num is %d\n", num);
	p(num);
	num /= 6;
	// printf("num is %d\n", num);
	p(num);
	return 0;
	*/
	int ret = function_return();
	p(ret);
}

// 정의
void p(int num) {
	printf("num is %d\n", num);
}

int function_return() {
	printf("this function has return value\n");
	return 10;
}