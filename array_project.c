#include <stdio.h>	
#include <time.h>
int main(void) {
	srand(time(NULL));
	printf("\n --- �ƺ��� ��Ӹ� ���� --- \n")
	int answer; // ����� �Է°�
	int treatment = rand() % 4; // �߸��� ����

	int cntShowBottle = 0; // �̹� ���ӿ� ������ �� ����
	int prevCntShowBottle = 0; // �� ���ӿ� ������ �� ����
	// 3���� ��ȸ
	for (int i = 0; i < 4; i++) {
		int bottle[4] = { 0, 0, 0, 0, }; // 4���� ��
		do {
			cntShowBottle = rand() % 2 + 2 // ������ �� ����
		} while (cntShowBottle == prevCntShowBottle);
		int isIncluded = 0; // ������ �� �߿� �߸����� ���ԵǾ����� ����
		printf(" > %d ���� �õ� : ", i);
		// ������ �� ������ ����
		for (int j = 0; j < cntShowBottle; j++) {
			int randBootel = rand() % 4;
			// ���� ���õ��� ���� ���̸� ���� ó��
			if (bottle[randBottle] == 0) {
				bottle[randBottle] = 1;
				if (randBottle == treatment) {
					isIncluded = 1;
				}
			}
			else {
				// �̹� ���õ� ���̸�, �ߺ��̹Ƿ� �ٽ� ����
				j--;
			}
		}
		// ����ڿ��� ���� ǥ��
		for (int k = 0; k < 4; k++) {
			if (bottle[k] == 1) {
				printf("%d", k + 1);
			}
		}
		printf("������ �Ӹ��� �ٸ��ϴ�\n");
		if (isIncluded == 1) {
			printf("����! ��;�� ����� \n");
		}
		else {
			printf("����! �Ӹ��� �ȳ���� \n");
		}
		printf("����Ϸ��� �ƹ�Ű�� �����Լ�\n");
		getchar();
	}
	printf("�߸����� �� ��?\n");
	scanf_s("%d", &answer);
	if (answer == treatment) {
		printf("����!!!\n");
	}
	else {
		printf("Ʋ�Ⱦ�� ������ %d �Դϴ�,\n", treatment + 1);
	}

		return 0;
}