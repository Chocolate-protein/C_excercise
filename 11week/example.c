/* 11주차 과제풀이용 

#include <stdio.h>

struct student
{
	int n;
};

int main(void)
{
	struct student s;
	struct student *sp = &s;

	(*sp).n = 0;
	printf("s.n : %d\n", s.n);

	sp -> n = 1;
	printf("s.n : %d\n", s.n);

	return 0;
} // main()*/