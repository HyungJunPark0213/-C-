#include <stdio.h>

int main(void)
{
	char kor = 70;
	char eng = 80;
	char mat = 90;
	unsigned int tot = 0;
	
	tot = kor + eng + mat;

	printf("����: %d, ����: %d, ����: %d\n", kor, eng, mat);
	printf("����: %u\n", tot);

	return 0;
}