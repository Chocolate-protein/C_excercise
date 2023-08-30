/* 9주차 과제 풀이용 

#include <stdio.h>

void swap(int*, int*);

int main(void)
{
	int a[2][3] = {
		{ 1, 2, 3 },
		{ 4, 5, 6 }
	};
	int i, *p;

	p = &a[0][0];

	for (i = 0; i < 3; i++)
		printf("a[0][%d] = %d\n", i, *(p + i));
	printf("\n");
	return 0;
} // main()*/