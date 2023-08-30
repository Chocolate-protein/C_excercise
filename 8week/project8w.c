/* 8주차 과제 풀이용 */


#include <stdio.h>

void print(char name[]);

int main(void)
{
	int lang;
	char name[4][9] = {
		{ 'F', 'L', 'O', 'W', 'E', 'R', '\0' },
		{ 'E', 'L', 'E', 'P', 'H', 'A', 'N', 'T', '\0' },
		{ 'T', 'I', 'G', 'E', 'R', '\0' },
		{ 'C', 'O', 'S', 'M', 'O', 'S', '\0' }
	};

	printf("*** name[4][9] 배열의 문자출력 ***\n");
	for (lang = 0; lang < 4; lang++)
		print(name[lang]);
	printf("\n");

	printf("*** name[4][9] 배열의 각 원소 문자출력 ***\n");
	printf("name[1][0] = %c\n", name[1][0]);
	printf("name[3][3] = %c\n", name[3][3]);
	return 0;
} // main()

void print(char array[])
{
	printf("%s\n", array);
} // print()
