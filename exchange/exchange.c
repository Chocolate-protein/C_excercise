/* exchange.c 김영기 2020. 3. 30일 */
#include <stdio.h>
int main()
{
	int usd;    //달러
	int krw;    //원화
	printf("달러 금액을 입력하십시오 :");  // 숫자를 입력해야하는 이유와 시기를 설명해준다.
	scanf_s("%d", &usd);
	krw = 1120 * usd;    // 1120은 현재 환율이다.
	printf("%d 달러는 %d 원입니다.\n", usd, krw);
}