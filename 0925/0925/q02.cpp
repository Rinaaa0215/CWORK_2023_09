#include<math.h>
#include<stdio.h>


void Changecurrency(double won, int currencyCode) {//�Լ� ����

	switch (currencyCode) {
	case 0:
		printf("��ȭ�� ����ϸ� %.2lf �Դϴ�.", won /10);
		break;
	case 1:
		printf("�޷�ȭ�� ����ϸ� %.2lf �Դϴ�.", won / 10);
		break;
	case 2:
		printf("���ȷ� ����ϸ� %.2lf �Դϴ�.", won / 10);
		break;
	default: 
		printf("�߸� �Է� �ϼ̽��ϴ�.");
		break;

	}



}
int main() {
	double won;
	int currencyCode;


	printf("��ȭ �׼��� �Է��ϼ���!");
	scanf_s("%lf", &won);
	getchar();//�Ǽ��� ���� ���� �޶�

	printf("���ϴ� ��ȭ�� ������(0.��ȭ 1.�޷�ȭ 2.����ȭ)");
	scanf_s("%d", &currencyCode);
	getchar();

	Changecurrency(won, currencyCode);


	return 0;

}