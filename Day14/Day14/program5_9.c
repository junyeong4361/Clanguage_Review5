#include <stdio.h>

void main() {
	int sum = 0, i;
	for (i = 1; i <= 100; i++) {
		if (i % 2 == 0) {//¦��
			continue;
		}
		sum = sum + i;
		printf("%d������ Ȧ���� ���� %d\n", i, sum);
	}
	printf("Ȧ���� ���� %d �Դϴ�.", sum);
}