/*����4.9 ���� 170p
#include <stdio.h>

int main(void)
{
	char ch;

	printf("1 �Է� �� ����, 2 �Է� �� ���� : ");
	ch = getchar();  //  1 ����
	ch = getchar();  //  ���� ����
	ch = getchar();  //  2 ����
	putchar(ch); putchar('\n');  // 1 -> \n(enter) -> 2 ������ ���ŵǾ� ���

	printf("345�� �������� �Է� �� ���� : "); 
	ch = getchar();  // 11������ �Է°� ���Ͱ� ����Ǿ� �Ѿ��
	ch = getchar();  // 3 ����
	ch = getchar();  // 4 ����
	ch = getchar();  // 5 ����
	putchar(ch);

	putchar('\n'); putchar('\n');

	return 0;
}*/