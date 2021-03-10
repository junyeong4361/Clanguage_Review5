#include <stdio.h>

void main() {

	int sum = 0;
	int i;//i가 밖에 있어야 for문 밖에서도 사용이 가능하다.
	for (i = 1; i <= 100; i++) {
		sum = sum + i;
		printf("%d까지의 합은 %d\n", i, sum);
		if (sum >= 200) { break; }
	}
	printf("합이 200보다 커지게 되는 경우는 1부터 %d까지의 합입니다.", i);
}