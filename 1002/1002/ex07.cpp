#include<iostream>
#include<string>

class Damakozi {
private:
	string name;
	int age;
public:
	Damakozi(string inputName) :name(inputName) {

	}
	void introduce() {//일반함수
		cout << "Hello my name is" << this->name << endl;
		cout << "my age is" << this->age << endl;

	}
};
int main() {
	Damakozi megamon("megamon",3);
	megamon.introduce():
}