#include <stdio.h>
int main(void) {
	int n, r;
	int i;
	int sum;

	printf("n�� ��: ");
	scanf_s("%d", &n);  // n�� �Է�

	printf("r�� ��: ");
	scanf_s("%d", &r);  // r�� �Է� 

	sum = 1;

	for (i = n; i >= (n - r + 1); i--) {
		sum = sum * i;
	}  // ���� ����

	printf("����: %d\n", sum); // ���� 

	return 0;