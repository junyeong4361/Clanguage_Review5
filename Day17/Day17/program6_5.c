#include <stdio.h>

void v_test(int);

int global_a; //��������
void main() {
	int local_b; //��������
	global_a = 10;
	local_b = 10;
	printf("1.global_a=%d, local=%d\n", global_a, local_b);
	v_test(local_b);
	printf("3.gloval_a=%d, local=%d\n", global_a, local_b);



}
void v_test(int local_b){ //�Ű�����:�Լ�ȣ��~����
	global_a = 20;
	local_b = 20;
	printf("2.gloval_a=%d, local=%d\n", global_a, local_b);
}