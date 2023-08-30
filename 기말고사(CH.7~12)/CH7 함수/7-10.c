/**/

#include <stdio.h>
struct S
{
	char id;
	char name[10];
	int score;
};
int main(void)
{
	struct S s1 = { 1, "Joey", 70 };
		scanf_s("%s", s1.name);
	printf("s1.name : %s\n", s1.name);
	return 0;
	} // main()