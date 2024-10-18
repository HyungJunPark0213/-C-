#include <stdio.h>

int main(void)
{
	char kor = 70;
	char eng = 80;
	char mat = 90;
	unsigned int tot = 0;
	
	tot = kor + eng + mat;

	printf("국어: %d, 영어: %d, 수학: %d\n", kor, eng, mat);
	printf("총점: %u\n", tot);

	return 0;
}