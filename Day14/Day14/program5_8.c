#include <stdio.h>

void main() {

	int sum = 0;
	int i;//i�� �ۿ� �־�� for�� �ۿ����� ����� �����ϴ�.
	for (i = 1; i <= 100; i++) {
		sum = sum + i;
		printf("%d������ ���� %d\n", i, sum);
		if (sum >= 200) { break; }
	}
	printf("���� 200���� Ŀ���� �Ǵ� ���� 1���� %d������ ���Դϴ�.", i);
}