#include<stdio.h>

void static_vtest();//�Լ��� ����
void main() {
	static_vtest();
	static_vtest();
	static_vtest();

}

//������
void static_vtest() {
		int sum = 0; //��������: �Լ����� ~ ����
	static int s_sum = 0; //��������: ���α׷����� ~ ����
	sum = sum + 10;
	s_sum = s_sum + 10;
	printf("sum:%d, s_sum:%d\n", sum, s_sum);
}