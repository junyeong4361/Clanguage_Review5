#include <stdio.h>

void v_test(int);

int global_a; //지역변수
void main() {
	int local_b; //지역변수
	global_a = 10;
	local_b = 10;
	printf("1.global_a=%d, local=%d\n", global_a, local_b);
	v_test(local_b);
	printf("3.gloval_a=%d, local=%d\n", global_a, local_b);



}
void v_test(int local_b){ //매개변수:함수호출~종료
	global_a = 20;
	local_b = 20;
	printf("2.gloval_a=%d, local=%d\n", global_a, local_b);
}