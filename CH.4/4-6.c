/* */

#include <stdio.h>

int main()
{
	double x, w;
	x = 12.5678;
	w = 123;

	printf("%07.2f\n", x);				// 0012.26
	printf("%012.2e\n",x);				// 00001.26e+01
	printf("%f\n",w);					// 123.000000
	printf("%g\n",w);					// 123

	return 0;
}