#include <stdio.h>

extern int i, j;//�ܺκ���
extern void sum();
void main() {
	printf("���� �Է�:");
	scanf("%d", &i); //�ܺκ��� i�� ����
	printf("���� �Է�:");
	scanf("%d", &j); //�ܺκ��� j�� ����

	sum();
	printf("���α׷� ����\n");

}