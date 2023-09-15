#include <stdio.h>

int main() {
	//2
	int num;
	

	printf("입력: ");
	scanf("%d", &num);

	//자릿수
	/*
	int ten_thousand = num / 10000;//만의 자리 수
	num = num % 1000;

	int thousand = num / 1000;//천의 자리 수
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
		divider /= 10;//나누는 수가 작아짐
	}
	printf("%d만%d천%d백%d십%d\n", result[0], result[1], result[2], result[3], result[4]);

}