#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	double num1, num2, result;
	double sum = 1;
	char c;
	int i;

	// printf("Input Arithmetic Operation");
	printf("input: \n");
	scanf("lf %c %lf", &num1, &c, &num2);

	if (c == '+') {
		result = num1 + num2;
		printf("%.2f + %.2f = %.2f\n", num1, num2, result);
	}  // c가 +일때
	else if (c == '-') {
		result = num1 - num2;
		printf("%.2f - %.2f = %.2f\n", num1, num2, result);
	}  // c가 -일때
	else if (c == '*') {
		result = num1 * num2;
		printf("%.2f * %.2f = %.2f\n", num1, num2, result);
	}  // c가 *일때
	else if (c == '/') {
		if (num2 != 0) {
			result = num1 / num2;
			printf("%.2f / %.2f = %.2f\n", num1, num2, result);
		}   // c가 /면서 num2가 0이 아닐 때 
		else {
			printf("0으로 숫자를 나누는 것은 불가능하다.\n");
		}   // num2가 0일때
	}
	else if (c == '^') {
		for (i = 0; i < num2; i++) {
			sum = sum * num1;
		}
		printf("%.2f ^ %.2f = %.2f\n", num1, num2, sum); // 거듭제곱
	}
	else {
		printf("계산할 수 없다.\n");
	}
	return 0;
}