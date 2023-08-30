/* 12주차 과제풀이 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i;

	char *t = (char*)malloc(sizeof(char));
	for (i = 0; i < 8; i++)
		t[i] = 'a' + i;

	t[i] = 0;

	printf("%s\n", t);

	free(t);
} // main()