#include <stdio.h>

int main(void)
{
	printf("%d\n", 10);
	printf("%lf\n", 3.4);		// Default�� �Ҽ��� ���� ����° �ڸ����� ���
	printf("%.1lf\n", 3.4);		// �Ҽ��� ���� ù° �ڸ����� ���(��° �ڸ����� �ݿø�)
	printf("%.10lf\n", 3.4);	// �Ҽ��� ���� ��° �ڸ� ���(11��° �ڸ����� �ݿø�)
	printf("%f\n", 3.4);		// �׳� f �ᵵ �Ҽ��� ���� ����° �ڸ����� ���

	printf("%d�� %d�� ���� %d�Դϴ�.\n", 10, 20, 10 + 20);
	printf("%.1lf - %.1lf = %.1lf\n", 3.4, 1.2, 3.4 - 1.2);

	printf("Be\rHappy!\nBaby");

	return 0;
}