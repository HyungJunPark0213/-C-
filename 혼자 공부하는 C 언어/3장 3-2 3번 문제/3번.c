#include <stdio.h>

int main(void)
{
	char ch;

	printf("문자 입력: ");
	scanf("%c", &ch);
	printf("%c 문자의 아스키 코드 값은 %d입니다.\n", ch, ch);

	// char ch;

	return 0;
}
