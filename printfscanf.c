#include <stdio.h>
int main_printfscanf(void) 
{
	// 정수형 변수
	/*int age = 12;
	printf("%d\n", age);
	age = 13;
	printf("%d\n", age);
	*/
	// 실수형 변수
	/*float f = 48.5;
	printf("%.2f\n", f);
	double d = 4.426;
	printf("%.2lf", d);
	*/
	// 상수
	// const int YEAR = 2000;
	// printf("태어난 년도 : %d\n", YEAR);
	// YEAR = 2001;

	//printf
	// int add = 3 + 7;
	// printf("3 + 7 = %d\n", add);
	// printf("%d + %d = %d", 3, 7, 3 + 7);

	// scanf 키보드 입력을 받아서 저장
	/*int input;
	printf("값을 입력하세요 : ");
	scanf_s("%d", &input);
	printf("입력값 : %d\n", input);
	*/
	/*
	int one, two, three;
	printf("3개의 정수를 입력하세요 : ");
	scanf_s("%d %d %d", &one, &two, &three);
	printf("첫번째 값 : %d\n", one);
	printf("두번째 값 : %d\n", two);
	printf("세번째 값 : %d\n", three);*/
	// 문자, 문자열
	/*char c = 'A';
	printf("%c\n", c);*/
	/*char str[256];
	scanf_s("%s", str, sizeof(str));
	printf("%s\n", str);*/
	// 조서작성 프로젝트
	// 이름? 나이? 몸무게? 키? 범죄명?
	char name[256];
	printf(" 이름이 뭐에요?");
	scanf_s("%s", name, sizeof(name));

	int age;
	printf("몇 살이에요?");
	scanf_s("%d", &age);

	float weight;
	printf("몸무게는 몇 kg이에요?");
	scanf_s("%f", &weight);

	double height;
	printf("키는 몇 cm이에요?");
	scanf_s("%lf", &height);

	char what[256];
	printf("무슨 범죄를 저질렀어요?");
	scanf_s("%s", what, sizeof(what));

	// 조서 내용 출력
	printf("\n\n----범죄좌 정보----\n\n");
	printf("이름	: %s\n", name);
	printf("나이	: %d\n", age);
	printf("몸무게	: %.2f\n", weight);
	printf("키	: %.2lf\n", height);
	printf("범죄	: %s\n", what);

	return 0;
}