#include <stdio.h>

int main(void)
{
	printf("%d\n", 10);
	printf("%lf\n", 3.4);		// Default는 소수점 이하 여섯째 자리까지 출력
	printf("%.1lf\n", 3.4);		// 소수점 이하 첫째 자리까지 출력(둘째 자리에서 반올림)
	printf("%.10lf\n", 3.4);	// 소수점 이하 열째 자리 출력(11번째 자리에서 반올림)
	printf("%f\n", 3.4);		// 그냥 f 써도 소수점 이하 여섯째 자리까지 출력

	printf("%d과 %d의 합은 %d입니다.\n", 10, 20, 10 + 20);
	printf("%.1lf - %.1lf = %.1lf\n", 3.4, 1.2, 3.4 - 1.2);

	printf("Be\rHappy!\nBaby");

	return 0;
}