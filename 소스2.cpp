#include <stdio.h>

int main(void) {

	int i;
	int num;
	int fibo0 = 0;
	int fibo1 = 1; // 1��°, 2��° �Ǻ���ġ�� ����
	int fibo;  // n��° �Ǻ���ġ ���� ����

	printf("n�� �Է��ϼ���.\n");
	scanf_s("%d", &num);

	printf("%d, %d, ", fibo0, fibo1);

	for (i = 0; i < num - 2; i++) { // 1��°, 2��° �Ǻ���ġ �� ������ Ƚ��(n)��ŭ �ݺ�

		fibo = fibo0 + fibo1;
		printf("%d, ", fibo);

		fibo0 = fibo1;  // (n-2)���� (n-1)������
		fibo1 = fibo;  // (n-1)���� n������ 
	}

	return 0;
}