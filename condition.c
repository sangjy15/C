#include <stdio.h>
#include<time.h>
int main_condition(void)
{
	/*
	int age = 15;
	if (age >= 20) {
		printf("�Ϲ��� �Դϴ�.");
	}
	else {
		printf("�л��Դϴ�.");
	}*/
	srand(time(NULL));
	int i = rand() % 3;
	/*
	if (i == 0) {
		printf("����\n");
	}
	else if (i == 1) {
		printf("����\n");
	}
	else if (i == 2) {
		printf("��\n");
	}
	else {
		printf("�����\n");
	}
	switch (i) {
	case 0: printf("����\n"); break;
	case 1: printf("����\n"); break;
	case 2: printf("��\n"); break;
	default: printf("�����\n");
	}*/
	// up & down
	srand(time(NULL));
	int num = rand() % 100 + 1;
	// printf("number is  : %d", num);
	int answer = 0;
	int chance = 3;
	while (chance > 0) {
		printf("you have %d try..\n", chance);
		printf("let's try (1 - 100) : \n");
		scanf_s("%d", &answer);
		if (answer > num) {
			printf("down\n");
		}
		else if (answer < num) {
			printf("up\n");
		}
		else {
			printf("you're win!! ;)\n");
			printf("%d\n", answer);
			break;
		}
		chance--;
	}
	if (answer != num) {
		printf("you're lose :(\n");
		printf("answer was : %d\n", num);
	}
	return 0;
}