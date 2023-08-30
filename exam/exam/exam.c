// 예제 3-1 101p
#include <stdio.h>

int main(void)
{
	int ival1;    // 변수1
	int ival2;    // 변수2
	int isum;    // 변수3

	ival1 = 100;    // 변수에 100저장
	ival2 = 10;    // 변수에 10저장
	isum = ival1 + ival2;    //덧셈결과를 변수3에 저장

	printf("ival1 + ival2 = %d\n", isum);
	return 0;
}