#include <stdio.h>

int main(void)
{
	printf("Be happy\n");		// 줄 바꿈(\n)
	printf("1234567890\n");
	printf("My\tfriend\n");		// 탭(8칸, \t)
	printf("Goot\bd\tchance\n");	// "Goot"를 출력하고 한 칸 왼쪽 이동(\b)해 t를 d로 바꾸고
	// 탭(8칸, \t)로 이동 후에 "chance"를 출력하고 줄 바꿈(\n)
	printf("Cow\rW\a\n");		// 맨 앞으로 이동(\r)해 C를 W로 바꾸고 벨소리(\a)를 내고 줄을 바꿈(\n)

	return 0;
}