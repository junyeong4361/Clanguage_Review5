#include <stdio.h>

void main() {
	int number = 0, i;
	for (i = 1; i <= 100; i++) {
		number = number + i;
	}
	printf("1부터 100까지의 합은 %d", number);
}