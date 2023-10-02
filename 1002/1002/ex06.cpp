#include<iostream>
//class는 객체지향 프로그래밍에서 데이터와 그를 처리하는 함수를 하나로 묶은 사용자 정의 데이터 타입.
#include<string>

using namespace std;//class이름은 앞글자 대문자 필수!!!
class Dog {
public:
	string name;
	int age;
	int energy;



public://함수
	void eating() {
		cout << "밥먹었습니다." << endl;
		energy += 30;
		this->energy += energy;
	}
	void bark() {
		cout << "멍멍!" << endl;
		energy -= 10;

	}
	void showEnergy() {
		cout << "현재 체력은" << energy << "입니다." << endl;
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