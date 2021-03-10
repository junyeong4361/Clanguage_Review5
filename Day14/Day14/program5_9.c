#include <stdio.h>

void main() {
	int sum = 0, i;
	for (i = 1; i <= 100; i++) {
		if (i % 2 == 0) {//짝수
			continue;
		}
		sum = sum + i;
		printf("%d까지의 홀수의 합은 %d\n", i, sum);
	}
	printf("홀수의 합은 %d 입니다.", sum);
}