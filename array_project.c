#include <stdio.h>	
#include <time.h>
int main(void) {
	srand(time(NULL));
	printf("\n --- 아빠는 대머리 게임 --- \n")
	int answer; // 사용자 입력값
	int treatment = rand() % 4; // 발모제 선택

	int cntShowBottle = 0; // 이번 게임에 보여줄 병 갯수
	int prevCntShowBottle = 0; // 앞 게임에 보여준 병 갯수
	// 3번의 기회
	for (int i = 0; i < 4; i++) {
		int bottle[4] = { 0, 0, 0, 0, }; // 4개의 병
		do {
			cntShowBottle = rand() % 2 + 2 // 보여줄 병 갯수
		} while (cntShowBottle == prevCntShowBottle);
		int isIncluded = 0; // 보여줄 병 중에 발모제가 포함되었는지 여부
		printf(" > %d 번재 시도 : ", i);
		// 보여줄 병 종류를 선택
		for (int j = 0; j < cntShowBottle; j++) {
			int randBootel = rand() % 4;
			// 아직 선택되지 않은 병이면 선택 처리
			if (bottle[randBottle] == 0) {
				bottle[randBottle] = 1;
				if (randBottle == treatment) {
					isIncluded = 1;
				}
			}
			else {
				// 이미 선택된 병이면, 중복이므로 다시 선택
				j--;
			}
		}
		// 사용자에게 문제 표시
		for (int k = 0; k < 4; k++) {
			if (bottle[k] == 1) {
				printf("%d", k + 1);
			}
		}
		printf("물약을 머리에 바릅니다\n");
		if (isIncluded == 1) {
			printf("성공! 멀;가 났어요 \n");
		}
		else {
			printf("실패! 머리가 안났어요 \n");
		}
		printf("계속하려면 아무키나 누르게숑\n");
		getchar();
	}
	printf("발모제는 몇 번?\n");
	scanf_s("%d", &answer);
	if (answer == treatment) {
		printf("정답!!!\n");
	}
	else {
		printf("틀렸어요 정답은 %d 입니다,\n", treatment + 1);
	}

		return 0;
}