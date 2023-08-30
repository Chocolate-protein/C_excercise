/* 예제 4.10 교재 172p
#include <stdio.h>

int main(void)
{
	char ch;

	printf("12를 입력 후 엔터 : ");  //입력한 문자 : 1 2 엔터
	ch = getchar();  // 1 갱신
	ch = getchar();  // 2 갱신
	putchar(ch); putchar('\n');

	getchar();  // 8열의 엔터 출력에서 제거

	printf("34를 입력한 후 엔터 : "); // 입력 문자 : 3 4 엔터
	ch = getchar();  // 3 갱신
	ch = getchar();  // 4 갱신
	putchar(ch); putchar('\n');

	putchar('\n');
	return 0;
}*/