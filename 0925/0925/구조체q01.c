#include<stdio.h>


struct ingred {
	int shots;
	int milk;
	int syrup;
};


struct Starbucks {
	char name[100];
	int price;
	char size[100];
	int calorie;
	struct ingred a;
};

int main() {
	struct Starbucks coffee = { "iced latte",5500,"tall",120,{2,150,0} }; //struct starbuck=int, ������=coffee

	printf("�ֹ��� Ŀ�Ǵ� %s\n", coffee.name);
	printf("������ %d\\ \n", coffee.price);
	printf("������� %s size\n", coffee.size);
	printf("Į�θ��� %d kcal\n", coffee.calorie);
	printf("���� ���� %d�� ���� %dml �÷� %d��\n",coffee.a.shots,coffee.a.milk,coffee.a.syrup);
}
//Ŀ�� �̸�
//����
//������ t g v
//Į�θ�
//��� {����, ��, �÷�}