#include<iostream>
#include<string>
using namespace std;

	class car {
	private: 
		string name;//��� ����(���)
		int price;
		string color;
		int gasoline;

	public://��� �Լ�(����)

		//������==�ʱ�ȭ
		car() {
			this->name = "avante";
			this->color = "pink";
			this->price = 2000;
			this->gasoline = 100;
		}

		void info() {
			cout << this->name << endl;
			cout << this->color << endl;
			cout << this->price << endl;
			cout << this->gasoline << endl;

		}
		void driving() {
			cout << "�θ��θ�" << endl;
			this->gasoline-= 10;
		}
		
	};
int main() {
	car car1;
	car1.info();

	car car2("tesla", "black");                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  
		car2.info();

}