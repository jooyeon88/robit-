#include <stdio.h>

int main(void) {
	int num;

	printf("숫자를 입력하세요. ");
	scanf("%d", &num);

	if (num == 0) {
		printf("출력할 수 없습니다\n");
	}
	else if (num % 2 == 0) {
		printf("출력할 수 없습니다\n");
	} // num = 1일 때 출력이 안됨 
	else if (num % 2 == 1) {
		for (int a = 0; a <= num; a++) {
			printf("*");
			for
		}
	}
}
