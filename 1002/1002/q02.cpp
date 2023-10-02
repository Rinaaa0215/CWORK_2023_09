#include<iostream>
#include<string>

using namespace std;

class cat {

private:
	string name;
	string speices;
	int age;
	int sex;
	int energy;

public:
	cat(string input,string input1) :name(input), speices(input1) {
	}
	void introduce() {
		cout << "my name is" << this->name << endl;
		cout << "my speices is" << this->speices << endl;


	}
	void sleep() {
		cout << "Àá ÀÚ±â" << endl;
		this->energy += 30;
	}
	void eat() {
		cout << "Ãò¸£ ¸Ô±â" << endl;
		this->energy += 20;
	}
	void play() {
		cout << "Áý»ç¿Í ³î±â" << endl;
		this->energy -= 10;
	}
		

};
int main() {
	cat kitty("kitty", "idk");
	kitty.introduce();
	kitty.play();
	kitty.introduce();

}