/*예제4.9 교재 170p
#include <stdio.h>

int main(void)
{
	char ch;

	printf("1 입력 후 엔터, 2 입력 후 엔터 : ");
	ch = getchar();  //  1 갱신
	ch = getchar();  //  엔터 갱신
	ch = getchar();  //  2 갱신
	putchar(ch); putchar('\n');  // 1 -> \n(enter) -> 2 순으로 갱신되어 출력

	printf("345를 연속으로 입력 후 엔터 : "); 
	ch = getchar();  // 11라인의 입력값 엔터가 저장되어 넘어옴
	ch = getchar();  // 3 갱신
	ch = getchar();  // 4 갱신
	ch = getchar();  // 5 갱신
	putchar(ch);

	putchar('\n'); putchar('\n');

	return 0;
}*/