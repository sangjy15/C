#include <stdio.h>

int main(void) {

	// array
	/*
	int subway_array[3];
	subway_array[0] = 30;
	subway_array[1] = 40;
	subway_array[2] = 50;
	for (int i = 0; i < 3; i++) {
		printf("����ö %d���� %d ���� Ÿ�� �ֽ��ϴ�,\n", i + 1, subway_array[i]);
	}*/
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	for (int i = 0; i < 10; i++) {
		printf("%d\n", arr[i]);
	}
	return 0;
}