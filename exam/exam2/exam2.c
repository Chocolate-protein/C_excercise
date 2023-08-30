// ¿¹Á¦3-2 106p
#include <stdio.h>

enum enum1 { one, two, three };
enum enum2 { mon = 10, tue, wed };
enum enum3 { a, b = 5, c };

int main(void)
{
	enum enum1 sum;

	sum = one + two + three;

	printf("one is %d\n", one);
	printf("two is %d\n", two);
	printf("three is %d\n", three);
	printf("sum is %d\n\n", sum);

	printf("mon is %d\n", mon);
	printf("tue is %d\n", tue);
	printf("wed is %d\n\n", wed);

	printf("a is %d\n", a);
	printf("b is %d\n", b);
	printf("c is %d\n\n", c);
	return 0;
}