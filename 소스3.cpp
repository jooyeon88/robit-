#include <stdio.h>

int main(void) {
	int year; // 변수 설정

	printf("년도를 입력하세요 : ");
	scanf_s("%d", &year);

	if (year % 4 == 0) { //윤년 조건: 연도가 4의 배수여야 함
		if (year % 100 != 0 || year % 400 == 0) {  // 운년 조건: 100의 배수가 아닐 때 또는 400의 배수일 때 윤년이라고 할 수 있음
			printf("윤년\n"); // 조건을 만족했을 때 윤년 출력 
		}

	}
	return 0;
}