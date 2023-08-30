/* 예제 4.11 교재 174p 
#include <stdio.h>

int main(void)
{
	char ch;
	ch = getchar();
	while (ch != EOF)
	{
		putchar(ch);
		ch = getchar();
	} // while
	putchar('\n');
	return 0;
}*/