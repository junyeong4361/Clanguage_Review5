#include<stdio.h>
#include<math.h> //pow(�ؼ�, ����)
//����ڤ����� �����ϳ��� �Է¹޾�, �Է¤����� �������� ������ ����ϱ�
int main() {
	int num;
	printf("���� �Է�:");
	scanf("%d", &num);
	for (int i = 1; i <= num; i++)
	{
		printf("%.0f ", pow(i, (double)2));
	}


	return 0;
}