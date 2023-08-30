/**/


#include <stdio.h>

int main(void)
{
	int a = 35, b, c, d;

	b = (a > 6) ? (a + 1) : (a - 1);
	printf("b = %d\n", b);

	b = a + 1, c = b / 2, d = c % 2;
	printf("d = %d\n", d);
	return 0;
} // main()