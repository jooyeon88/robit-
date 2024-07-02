#include <stdio.h>
int main(void) {
	int n, r;
	int i;
	int sum;

	printf("n의 값: ");
	scanf_s("%d", &n);  // n값 입력

	printf("r의 값: ");
	scanf_s("%d", &r);  // r값 입력 

	sum = 1;

	for (i = n; i >= (n - r + 1); i--) {
		sum = sum * i;
	}  // 순열 공식

	printf("순열: %d\n", sum); // 츨력 

	return 0;