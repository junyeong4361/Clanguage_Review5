#include<stdio.h>
//������ 2�� ��� ���α׷�
void main() {
	for (int j = 2; j <= 9; j++) {
		for (int i = 1; i <= 9; i++) {
			printf("%dX%d=%d\n",j, i, j * i);
		}
	}
}