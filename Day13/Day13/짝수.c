#include <stdio.h>
//for문을 사용해서 구현하기
//사용자에게 숫자를 입력받아, 입력ㅂ다은 숫자만큼의 짝수를 1부터 출력하기

int main() {
	int num;
	printf("숫라를 입력하세요:");
	scanf("%d", &num);
	for (int i = 1; i <= num; i++) {
		if (i % 2 == 0) {
			printf("%d ", i);
		}
	}




	return 0;
}