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
	}  // c�� +�϶�
	else if (c == '-') {
		result = num1 - num2;
		printf("%.2f - %.2f = %.2f\n", num1, num2, result);
	}  // c�� -�϶�
	else if (c == '*') {
		result = num1 * num2;
		printf("%.2f * %.2f = %.2f\n", num1, num2, result);
	}  // c�� *�϶�
	else if (c == '/') {
		if (num2 != 0) {
			result = num1 / num2;
			printf("%.2f / %.2f = %.2f\n", num1, num2, result);
		}   // c�� /�鼭 num2�� 0�� �ƴ� �� 
		else {
			printf("0���� ���ڸ� ������ ���� �Ұ����ϴ�.\n");
		}   // num2�� 0�϶�
	}
	else if (c == '^') {
		for (i = 0; i < num2; i++) {
			sum = sum * num1;
		}
		printf("%.2f ^ %.2f = %.2f\n", num1, num2, sum); // �ŵ�����
	}
	else {
		printf("����� �� ����.\n");
	}
	return 0;
}