#include<math.h>
#include<stdio.h>


void Changecurrency(double won, int currencyCode) {//함수 정의

	switch (currencyCode) {
	case 0:
		printf("엔화로 계산하면 %.2lf 입니다.", won /10);
		break;
	case 1:
		printf("달러화로 계산하면 %.2lf 입니다.", won / 10);
		break;
	case 2:
		printf("위안로 계산하면 %.2lf 입니다.", won / 10);
		break;
	default: 
		printf("잘못 입력 하셨습니다.");
		break;

	}



}
int main() {
	double won;
	int currencyCode;


	printf("원화 액수를 입력하세요!");
	scanf_s("%lf", &won);
	getchar();//실수와 정수 단위 달라서

	printf("원하는 통화를 고르세요(0.엔화 1.달러화 2.위안화)");
	scanf_s("%d", &currencyCode);
	getchar();

	Changecurrency(won, currencyCode);


	return 0;

}