#include<iostream>
//class�� ��ü���� ���α׷��ֿ��� �����Ϳ� �׸� ó���ϴ� �Լ��� �ϳ��� ���� ����� ���� ������ Ÿ��.
#include<string>

using namespace std;//class�̸��� �ձ��� �빮�� �ʼ�!!!
class Dog {
public:
	string name;
	int age;
	int energy;



public://�Լ�
	void eating() {
		cout << "��Ծ����ϴ�." << endl;
		energy += 30;
		this->energy += energy;
	}
	void bark() {
		cout << "�۸�!" << endl;
		energy -= 10;

	}
	void showEnergy() {
		cout << "���� ü����" << energy << "�Դϴ�." << endl;
	}
};

int main(){

	Dog dog1;
	dog1.name = "mega";
	dog1.age = 1;
	dog1.energy = 100;

	dog1.showEnergy();
	dog1.bark();
	dog1.bark();
	dog1.bark();
	dog1.showEnergy();

	dog1.eating();
	dog1.showEnergy();
	return 0;

}