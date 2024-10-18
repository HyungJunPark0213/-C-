#include <stdio.h>

int main(void)
{
	printf("%d\n", 12);
	printf("%d\n", 014);	// 8진수 정수 상수
	printf("%d\n", 0xc);	// 16진수 정수 상수

	printf("%o\n", 12);
	printf("%x\n", 12);
	printf("%X\n", 0xc);

	return 0;
}