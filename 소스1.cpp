#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void) {
	float num1, num2, num3, num4, num5;
	float sum;
	float avg;
	float max;
	float min;  // ���� ����

	printf("1 ��° �Ǽ��� �Է��ϼ���.\n");
	scanf_s("%f", &num1);
	printf("2 ��° �Ǽ��� �Է��ϼ���.\n");
	scanf_s("%f", &num2);
	printf("3 ��° �Ǽ��� �Է��ϼ���.\n");
	scanf_s("%f", &num3);
	printf("4 ��° �Ǽ��� �Է��ϼ���.\n");
	scanf_s("%f", &num4);
	printf("5 ��° �Ǽ��� �Է��ϼ���.\n");
	scanf_s("%f", &num5);      // �Ǽ� �Է�

	sum = num1 + num2 + num3 + num4 + num5;
	avg = sum / 5;     // �Ǽ��� �� ���� �� ��� ����

	max = num1; // �ϴ� ù��°�� �Է¹��� ����  max�� 
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
	}    // num 2���� 5���� ���ʴ�� ���ϸ鼭 max�� ���ϱ� 

	min = num1; // ó������ num1 ���� min���� 
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
	}     // num2 ���� 5���� ���ʴ�� ���ϸ鼭 min�� ���ϱ� 

	printf("---- ��� ----\n");
	printf("����� %f�Դϴ�.\n", avg);
	printf("�ִ��� %f�Դϴ�.\n", max);
	printf("�ּڰ��� %f�Դϴ�.\n", min);

	return 0;
}