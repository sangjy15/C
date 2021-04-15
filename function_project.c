#include <stdio.h>	
#include <time.h>

int getRandomNumver(int level);
void showQuestion(int level, int num1, int num2);
void success();
void fail();
int main_function2(void) {
	// 문이 5개, 각 문마다 점점 어려운 수식퀴즈(랜덤)
	// 맞히면 통과, 틀리면 실패

	srand(time(NULL));
	int count = 0;
	for (int i = 0; i < 5; i++) {
		int num1 = getRandomNumver(i);
		int num2 = getRandomNumver(i);
		// printf("%d x $d ?", num1, num2);
		showQuestion(i, num1, num2);
		int answer = -1;
		scanf_s("%d", &answer);
		if (answer == -1) {
			printf("finish");
			exit(0);
		}
		else if (answer == num1 * num2) {
			success();
			count++;
		}
		else {
			fail();
		}
	}
	printf("당신은 5개 중 %d맞춤\n", count);
	return 0;
}

int getRandomNumver(int level) {
	return rand() % (level * 7) + 1;
}

void showQuestion(int level, int num1, int num2) {
	printf("%d 번째 비밀번호 \n", level);
	printf("%d x %d = ? \n", num1, num2);
	printf("enter password (exit -> -1)\n");
}
void success() {
	printf("you're win!\n");
}
void fail() {
	printf("you're fail!\n");
}