#include <stdio.h>

int main() {
	//2
	int num;
	

	printf("�Է�: ");
	scanf("%d", &num);

	//�ڸ���
	/*
	int ten_thousand = num / 10000;//���� �ڸ� ��
	num = num % 1000;

	int thousand = num / 1000;//õ�� �ڸ� ��
	num = num % 100;

	int hundred = num / 100;
	num = num % 10;

	int ten = num / 10;
	num = num % 10;

	int one = num;
	*/
	int divider = 10000;
	int result[5];

	for (int i = 0; i < 5; i++) {
		result[i]=num/	divider;
		num=num%divider;
		divider /= 10;//������ ���� �۾���
	}
	printf("%d��%dõ%d��%d��%d\n", result[0], result[1], result[2], result[3], result[4]);

}