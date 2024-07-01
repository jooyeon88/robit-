#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void) {
	float num1, num2, num3, num4, num5;
	float sum;
	float avg;
	float max;
	float min;  // 변수 설정

	printf("1 번째 실수를 입력하세요.\n");
	scanf_s("%f", &num1);
	printf("2 번째 실수를 입력하세요.\n");
	scanf_s("%f", &num2);
	printf("3 번째 실수를 입력하세요.\n");
	scanf_s("%f", &num3);
	printf("4 번째 실수를 입력하세요.\n");
	scanf_s("%f", &num4);
	printf("5 번째 실수를 입력하세요.\n");
	scanf_s("%f", &num5);      // 실수 입력

	sum = num1 + num2 + num3 + num4 + num5;
	avg = sum / 5;     // 실수의 합 구한 후 평균 산출

	max = num1; // 일단 첫번째로 입력받은 값을  max로 
	if (num2 > max) {
		max = num2;
	}
	if (num3 > max) {
		max = num3;
	}
	if (num4 > max) {
		max = num4;
	}
	if (num5 > max) {
		max = num5;
	}    // num 2부터 5까지 차례대로 비교하면서 max값 구하기 

	min = num1; // 처음에는 num1 값을 min으로 
	if (num2 < min) {
		min = num2;
	}
	if (num3 < min) {
		min = num3;
	}
	if (num4 < min) {
		min = num4;
	}
	if (num5 < min) {
		min = num5;
	}     // num2 부터 5까지 차례대로 비교하면서 min값 구하기 

	printf("---- 결과 ----\n");
	printf("평균은 %f입니다.\n", avg);
	printf("최댓값은 %f입니다.\n", max);
	printf("최솟값은 %f입니다.\n", min);

	return 0;
}