/* ���� 4.10 ���� 172p
#include <stdio.h>

int main(void)
{
	char ch;

	printf("12�� �Է� �� ���� : ");  //�Է��� ���� : 1 2 ����
	ch = getchar();  // 1 ����
	ch = getchar();  // 2 ����
	putchar(ch); putchar('\n');

	getchar();  // 8���� ���� ��¿��� ����

	printf("34�� �Է��� �� ���� : "); // �Է� ���� : 3 4 ����
	ch = getchar();  // 3 ����
	ch = getchar();  // 4 ����
	putchar(ch); putchar('\n');

	putchar('\n');
	return 0;
}*/