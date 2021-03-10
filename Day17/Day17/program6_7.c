#include<stdio.h>

void static_vtest();//함수의 원형
void main() {
	static_vtest();
	static_vtest();
	static_vtest();

}

//구현부
void static_vtest() {
		int sum = 0; //지역변수: 함수실행 ~ 종료
	static int s_sum = 0; //정적변수: 프로그램실행 ~ 종료
	sum = sum + 10;
	s_sum = s_sum + 10;
	printf("sum:%d, s_sum:%d\n", sum, s_sum);
}