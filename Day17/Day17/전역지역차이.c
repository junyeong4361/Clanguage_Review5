#include <stdio.h>
int x = 3; //전역변수
void f1(); //함수원형
void main() {
	int y = 4;//지역변수
	printf("x:%d\n", x);
	printf("y:%d\n", y);
	f1(); //함수의 호출
}
//함수의 구현부
void f1() {
	printf("f1() 호출!\n");
	printf("x:%d\n", x);
	//printf("y:%d\n", y);


}