/* exchange.c �迵�� 2020. 3. 30�� */
#include <stdio.h>
int main()
{
	int usd;    //�޷�
	int krw;    //��ȭ
	printf("�޷� �ݾ��� �Է��Ͻʽÿ� :");  // ���ڸ� �Է��ؾ��ϴ� ������ �ñ⸦ �������ش�.
	scanf_s("%d", &usd);
	krw = 1120 * usd;    // 1120�� ���� ȯ���̴�.
	printf("%d �޷��� %d ���Դϴ�.\n", usd, krw);
}