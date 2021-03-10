#include<stdio.h>
#include<math.h> //pow(밑수, 지수)
//사용자ㅇ한테 숫자하나를 입력받아, 입력ㅂ다은 수까지의 제곱을 출력하기
int main() {
	int num;
	printf("숫자 입력:");
	scanf("%d", &num);
	for (int i = 1; i <= num; i++)
	{
		printf("%.0f ", pow(i, (double)2));
	}


	return 0;
}