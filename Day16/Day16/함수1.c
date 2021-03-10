#include <stdio.h>
/*
두 수를 입력받아 두 수 의 합을 출력하는 함수 sum
*/

void sum1() {
	int x, y;
	printf("수1:");
	scanf("%d", &x);
	printf("수2:");
	scanf("%d", &y);

	printf("x+y=%d\n", x + y);
}
void f1(int x) {//x는 함수의 호출부에서 값을 전달받아 저장할 매개변수
	printf("%d", x);//매개변수에 저장한 값을 출력
}
void sum2(int x, int y) {
	printf("x+y=%d\n", x + y);
}
int f2() {
	printf("f2() 실행중~\n");
	return 100;
}
int sum3(int x, int y) {
	int result = x + y;
	return result;
}
void main() {
	printf("%d",sum3(10, 20));
	
}