#include <stdio.h>

int main(void)
{
	printf("Be happy\n");		// �� �ٲ�(\n)
	printf("1234567890\n");
	printf("My\tfriend\n");		// ��(8ĭ, \t)
	printf("Goot\bd\tchance\n");	// "Goot"�� ����ϰ� �� ĭ ���� �̵�(\b)�� t�� d�� �ٲٰ�
	// ��(8ĭ, \t)�� �̵� �Ŀ� "chance"�� ����ϰ� �� �ٲ�(\n)
	printf("Cow\rW\a\n");		// �� ������ �̵�(\r)�� C�� W�� �ٲٰ� ���Ҹ�(\a)�� ���� ���� �ٲ�(\n)

	return 0;
}