#include <stdio.h>

int main(void) {

	int i;
	int num;
	int fibo0 = 0;
	int fibo1 = 1; // 1번째, 2번째 피보나치수 선언
	int fibo;  // n번째 피보나치 변수 설정

	printf("n을 입력하세요.\n");
	scanf_s("%d", &num);

	printf("%d, %d, ", fibo0, fibo1);

	for (i = 0; i < num - 2; i++) { // 1번째, 2번째 피보나치 수 제외한 횟수(n)만큼 반복

		fibo = fibo0 + fibo1;
		printf("%d, ", fibo);

		fibo0 = fibo1;  // (n-2)항을 (n-1)항으로
		fibo1 = fibo;  // (n-1)항을 n항으로 
	}

	return 0;
}